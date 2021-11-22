import java.io.File;
import java.util.Scanner;
import java.io.PrintWriter;
import java.util.regex.*;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;

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

    FileWriter fw = new FileWriter(instructorFile, true);
    PrintWriter output = new PrintWriter(fw);
 
    ArrayList<Integer> departmentFund = new ArrayList<Integer>();
    ArrayList<String> departmentName = new ArrayList<String>();
    ArrayList<String> departmentLocation = new ArrayList<String>();
    
    int arrOfDeptSize = 0;
    while(departmentDatabaseSize.hasNextLine()){
        arrOfDeptSize++;
        departmentDatabaseSize.nextLine();
    }
    for(int j = 0; j < arrOfDeptSize;j++){
        String line = departmentDatabase.nextLine();
        String[] deptField = line.split(",");
        departmentName.add(deptField[0]);
        departmentLocation.add(deptField[1]);
        departmentFund.add(Integer.parseInt(deptField[2].trim()));
    }

    //counts the number of items/lines in the file "instructor.txt" -- shows 6.
    
    ArrayList<Integer> instructorID = new ArrayList<Integer>();
    ArrayList<String> instructorName = new ArrayList<String>();
    ArrayList<String> instructorDepartment = new ArrayList<String>();
    ArrayList<String> instructorLocation = new ArrayList<String>();
    
    int arrOfInstSize = 0;
    while(instructorDatabaseSize.hasNextLine()){
        arrOfInstSize++;
        instructorDatabaseSize.nextLine();
    }

    for(int j = 0; j < arrOfInstSize;j++){
        String line = instructorDatabase.nextLine();
        String[] instrucField = line.split(",");
        instructorID.add(Integer.parseInt(instrucField[0].trim()));
        instructorName.add(instrucField[1]);
        instructorDepartment.add(instrucField[2]);
        for(int a = 0; a < listOfDepartments.length; a++){
            if(instructorDepartment.get(j).equals(departmentName.get(a))){
                instructorLocation.get(j) = departmentName.get(a);
            }
        }
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
        int instructorFileCounter = listOfInstructors.length+1;
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
                    if(option2NameUserInput.matches("^[\\p{L} .'-]+$")){
                        option2NameFlag = true;
                    }
                    while(option2NameFlag == false){
                        System.out.print("Please enter a valid name: ");
                        option2NameUserInput = option2Name.nextLine();
                        if(option2NameUserInput.matches("^[\\p{L} .'-]+$")){
                            option2NameFlag = true;
                        }
                    }
                    String newInstructorName = option2NameUserInput;
                    
                    System.out.print("Enter the affiliated department name: ");
                    String option2DeptUserInput = option2Dept.nextLine();
                    boolean option2DeptFlag = false;
                    if(option2DeptUserInput.toUpperCase().matches("[A-Z]{4}")){
                        option2DeptFlag = true;
                    }
                    while(option2DeptFlag == false){
                        System.out.print("Please enter a valid department name: ");
                        option2DeptUserInput = option2Dept.nextLine();
                        if(option2DeptUserInput.toUpperCase().matches("[A-Z]{4}")){
                            option2DeptFlag = true;
                        }
                    }
                    continueFlag = false;
                    for(int i = 0; i < listOfDepartments.length;i++){
                        if(listOfDepartments[i].getDept().equalsIgnoreCase(option2DeptUserInput)){
                            continueFlag = true;
                        }
                    }
                    if(continueFlag == false){
                        System.out.println("The department does not exist, hence, the instructor record cannot be added to the file.");
                        System.out.println();
                        break;
                    }
                    String newInstructorLocation = "";
                    for(int a = 0; a < listOfDepartments.length; a++){
                        if(option2DeptUserInput.equals(listOfDepartments[a].getDept())){
                            newInstructorLocation = listOfDepartments[a].getLocation();
                        }
                    }
                    listOfInstructors[instructorFileCounter] = new Instructor(Integer.parseInt(option2IDUserInput),option2NameUserInput,option2DeptUserInput,newInstructorLocation);
                    output.print("\n"+option2IDUserInput+","+option2NameUserInput+","+option2DeptUserInput);
                }
                
                break;
            case 3:
                System.out.println();
                System.out.println("Exited.");
                System.out.println();
                output.close();
                break;
            default:
                System.out.println();
                System.out.println("Please enter a valid input.");
                break;
        }
    }
  }
}
