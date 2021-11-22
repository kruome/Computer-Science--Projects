import java.io.File;
import java.util.Scanner;
import java.io.PrintWriter;
import java.util.regex.*;
import java.io.FileNotFoundException;




public class Main{
  public static void main(String[] args)throws java.io.IOException{

    File instructorFile = new File("instructor.txt");
    Scanner instructorDatabase = new Scanner(instructorFile);
    File instructorFileSize = new File("instructor.txt");
    Scanner instructorDatabaseSize = new Scanner(instructorFileSize);
    
    File departmentFile = new File("department.txt");
    Scanner departmentDatabase = new Scanner(departmentFile);
    File departmentFileSize = new File("department.txt");
    Scanner departmentDatabaseSize = new Scanner(departmentFile);
    
    int arrOfDeptSize = 0;
    while(departmentDatabaseSize.hasNextLine()){
        arrOfDeptSize++;
        departmentDatabaseSize.nextLine();
    }
    
    Department[] listOfDepartments = new Department[arrOfDeptSize];
    for(int i = 0; i < listOfDepartments.length; i++){
        listOfDepartments[i] = new Department();
    }
    for(int j = 0; j < listOfDepartments.length;j++){
        String line = departmentDatabase.nextLine();
        String[] deptField = line.split(",");
        String departmentName = deptField[0];
        String departmentLocation = deptField[1];
        int departmentFund = Integer.parseInt(deptField[2].trim());
        listOfDepartments[j] = new Department(departmentFund,departmentLocation,departmentName);
    }

    //counts the number of items/lines in the file "instructor.txt" -- shows 6.
    int arrsize = 0;
    while(instructorDatabaseSize.hasNextLine()){
      arrsize++;
      instructorDatabaseSize.nextLine();
    }



    Instructor[] listOfInstructors = new Instructor[arrsize];
    for(int i = 0; i<listOfInstructors.length;i++){
        listOfInstructors[i] = new Instructor();
    }

    for(int j = 0; j < listOfInstructors.length;j++){
        String line = instructorDatabase.nextLine();
        String[] instrucField = line.split(",");
        int instructorID = Integer.parseInt(instrucField[0].trim());
        String instructorName = instrucField[1];
        String instructorDept = instrucField[2];
        listOfInstructors[j] = new Instructor(instructorID,instructorName,instructorDept);
        String instructorLocation = "";
        for(int a = 0; a < listOfDepartments.length; a++){
            if(listOfInstructors[j].getDept().equals(listOfDepartments[a].getDept())){
                instructorLocation = listOfDepartments[a].getLocation();
            }
        }
        listOfInstructors[j] = new Instructor(instructorID, instructorName, instructorDept, instructorLocation);
    }
    
    Scanner userInput = new Scanner(System.in);
    int userOption = 0;
    
    //menu which has 3 options and stops when option 3 is entered -- work in progress    
    int option1LoopCount = 0;
    Scanner option1 = new Scanner(System.in);
    int option1UserInput = 0;
    
    // option2 scanners
    Scanner option2Name = new Scanner(System.in);
    Scanner option2ID = new Scanner(System.in);
    Scanner option2Dept = new Scanner(System.in);
    while(userOption != 3){
        System.out.println("        Menu: ");
        System.out.println("1. Get instructor information");
        System.out.println("2. Insert a new instructor");
        System.out.println("3. Exit");
        System.out.println();
        userOption = userInput.nextInt();
        switch(userOption){
            case 1:
                System.out.println();
                System.out.print("Enter the instructor ID: ");
                option1UserInput = option1.nextInt();
                for(int i = 0; i < listOfInstructors.length;i++){
                    if(listOfInstructors[i].getID() == option1UserInput){
                        System.out.println();
                        System.out.println("Instructor name: " + listOfInstructors[i].getName());
                        System.out.println("Instructor department: " + listOfInstructors[i].getDept());
                        System.out.println("Instructor department location: " + listOfInstructors[i].getLocation());
                        option1LoopCount++;
                    }
                }
                if(option1LoopCount != 1){
                    System.out.println("The ID does not appear in the file.");
                    option1LoopCount = 0;
                }
                option1LoopCount = 0;
                System.out.println();
                break;
            case 2:
                
                System.out.println();
                System.out.print("Enter the instructor ID: ");
                String option2IDUserInput = option2ID.nextLine();
                boolean option2IDFlag = false;
                boolean continueFlag = true;
                if(option2IDUserInput.matches("\\d{4}")){
                    option2IDFlag = true;
                }
                while(option2IDFlag == false){
                    System.out.print("Please enter a valid ID: ");
                    option2IDUserInput = option2ID.nextLine();
                    if(option2IDUserInput.matches("\\d{4}")){
                        option2IDFlag = true;
                    }
                }
                for(int i = 0; i < listOfInstructors.length; i++){
                    if(listOfInstructors[i].getID() == Integer.parseInt(option2IDUserInput)){
                        System.out.println("Instructor ID already exists in the file.");
                        System.out.println();
                        continueFlag = false;
                        break;
                    }
                }
                if(continueFlag == false){
                    break;
                }else{
                    int newInstructorID = Integer.parseInt(option2IDUserInput);
                
                    System.out.print("Enter the instructor name: ");
                    String option2NameUserInput = option2Name.nextLine();
                    boolean option2NameFlag = false;
                    if(option2NameUserInput.matches("^[A-Za-z]+")){
                        option2NameFlag = true;
                    }
                    while(option2NameFlag = false){
                        System.out.println("Please enter a valid name: ");
                        option2NameUserInput = option2Name.nextLine();
                        if(option2NameUserInput.matches("\\[a-z]+\\s\\[a-z]+")){
                            option2NameFlag = true;
                        }
                    }
                }
                break;
            case 3:
                System.out.println();
                System.out.println("Exited.");
                System.out.println();
                break;
            default:
                System.out.println();
                System.out.println("Please enter a valid input.");
                break;
        }
    }
  }
    static class Department{
        private int fund;
        private String location;
        private String dept;
    
        public Department(){
            fund = 0;
            location = "";
            dept = "";
        }
        public Department(int fund, String location, String dept){
            this.fund = fund;
            this.location = location;
            this.dept = dept;
        }
        public int getFund(){
            return fund;
        }
        public void setFund(int fund){
            this.fund = fund;
        }
        public String getLocation(){
            return location;
        }
        public void setLocation(String location){
            this.location = location;
        }
        public String getDept(){
            return dept;
        }
        public void setDept(String dept){
            this.dept = dept;
        }
    }

    static class Instructor{
        private int ID;
        private String name;
        private String dept;
        private String location;

        public Instructor(int ID, String name, String dept, String location){
            this.ID = ID;
            this.name = name;
            this.dept = dept;
            this.location = location;

        }
        public Instructor(int ID, String name, String dept){
            this.ID = ID;
            this.name = name;
            this.dept = dept;
        }
        public Instructor(){
            ID = 0;
            name = "";
            dept = "";
            location = "";
        }
        public int getID(){
            return ID;
        }
        public String getName(){
            return name;
        }
        public void setName(String name){
            this.name = name;
        }
        public String getLocation(){
            return location;
        }
        public void setLocation(String location){
            this.location = location;
        }
        public String getDept(){
            return dept;
        }
        public void setDept(String dept){
            this.dept = dept;
        }
    }
}
