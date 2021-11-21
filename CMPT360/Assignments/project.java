import java.io.File;
import java.util.Scanner;
import java.io.PrintWriter;
import java.io.FileNotFoundException;



public class Main{
  public static void main(String[] args)throws java.io.IOException{

    File instructorFile = new File("instructor.txt");
    Scanner instructorDatabase = new Scanner(instructorFile);
    File instructorFileSize = new File("instructor.txt");
    Scanner instructorDatabaseSize = new Scanner(instructorFileSize);

    //counts the number of items/lines in the file "instructor.txt" -- shows 6.
    int arrsize = 0;
    while(instructorDatabaseSize.hasNextLine()){
      arrsize++;
      instructorDatabaseSize.nextLine();
    }

    Scanner userInput = new Scanner(System.in);
    int userOption = 0;

    Instructor[] listOfInstructors = new Instructor[arrsize];
        for(int i = 0; i<listOfInstructors.length;i++){
            listOfInstructors[i] = new Instructor();
        }
        for(int j = 0; j < listOfInstructors.length;j++){
            String line = instructorDatabase.nextLine();
            String[] fields = line.split(",");
            int instructorID = Integer.parseInt(fields[0]);
            String instructorName = fields[1];
            //String instructorDepartment = fields[2];
            listOfInstructors[j] = new Instructor(instructorID,instructorName);
        }

    //menu which has 3 options and stops when option 3 is entered -- work in progress    
    int option1LoopCount = 0;
    Scanner option1 = new Scanner(System.in);
    int option1UserInput = 0;
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
                System.out.println("Enter the instructor ID: ");
                option1UserInput = option1.nextInt();
                for(int i = 0; i < listOfInstructors.length;i++){
                    if(listOfInstructors[i].getID() == option1UserInput){
                        System.out.println();
                        System.out.println("Instructor name: " + listOfInstructors[i].getName());
                        //System.out.println("Instructor department: " + listOfInstructors[i].getDepartment());
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
                System.out.println("2 got chosen");
                System.out.println();
                break;
            case 3:
                System.out.println();
                System.out.println("Exited.");
                System.out.println();
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
        private Department dept;
        private String location;

        public Instructor(int ID, String name){
            this.ID = ID;
            this.name = name;
        }
        public Instructor(){
            ID = 0;
            name = "";
            Department dept = new Department(0,"","");
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

    }

}
