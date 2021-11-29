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

    File instructorFile = new File("C:\\Users\\kdorji01\\Desktop\\instructor.txt");
    Scanner instructorDatabase = new Scanner(instructorFile);
    File instructorFileSize = new File("C:\\Users\\kdorji01\\Desktop\\instructor.txt");
    Scanner instructorDatabaseSize = new Scanner(instructorFileSize);
    
    File departmentFile = new File("C:\\Users\\kdorji01\\Desktop\\department.txt");
    Scanner departmentDatabase = new Scanner(departmentFile);
    File departmentFileSize = new File("C:\\Users\\kdorji01\\Desktop\\department.txt");
    Scanner departmentDatabaseSize = new Scanner(departmentFile);
 
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
        for(int a = 0; a < arrOfDeptSize; a++){
            instructorLocation.add("");
            if(instructorDepartment.get(j).equals(departmentName.get(a))){
                instructorLocation.set(j,departmentLocation.get(a));
            }
        }
    }
   
    Scanner userInput = new Scanner(System.in);
    int userOption = 0;
    int option1LoopCount = 0;
    Scanner option1 = new Scanner(System.in);
    int option1UserInput = 0;
    Scanner option2ID = new Scanner(System.in);
    Scanner option2Name = new Scanner(System.in);
    Scanner option2Dept = new Scanner(System.in);
    Scanner option2UserInput = new Scanner(System.in);
    
    while(userOption != 3){
        System.out.println("        Menu: ");
        System.out.println("1. Get instructor information");
        System.out.println("2. Insert a new instructor");
        System.out.println("3. Exit");
        System.out.println();
        System.out.println(instructorID.size()+ " " + instructorName.size() + " " + instructorName.size());
        userOption = userInput.nextInt();
        switch(userOption){
            case 1:
                System.out.println();
                System.out.print("Enter the instructor ID: ");
                option1UserInput = option1.nextInt();
                for(int i = 0; i < arrOfInstSize;i++){
                    if(instructorID.get(i) == option1UserInput){
                        System.out.println();
                        System.out.println("Instructor name: " + instructorName.get(i));
                        System.out.println("Instructor department: " + instructorDepartment.get(i));
                        System.out.println("Instructor department location: " + instructorLocation.get(i));
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
                FileWriter fw = new FileWriter(instructorFile, true);
                PrintWriter output = new PrintWriter(fw);
                
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
                for(int i = 0; i < arrOfInstSize; i++){
                    if(instructorID.get(i) == Integer.parseInt(option2IDUserInput)){
                        System.out.println("Instructor ID already exists in the file.");
                        System.out.println();
                        continueFlag = false;
                        break;
                    }
                }
                if(continueFlag == false){
                    break;
                }else{
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

                    System.out.print("Enter the affiliated department name: ");
                    String option2DeptUserInput = option2Dept.nextLine();
                    option2DeptUserInput = option2DeptUserInput.toUpperCase();
                    boolean option2DeptFlag = false;
                    if(option2DeptUserInput.matches("[A-Z]{4}")){
                        option2DeptFlag = true;
                    }
                    while(option2DeptFlag == false){
                        System.out.print("Please enter a valid department name: ");
                        option2DeptUserInput = option2Dept.nextLine();
                        if(option2DeptUserInput.matches("[A-Z]{4}")){
                            option2DeptFlag = true;
                        }
                    }
                    continueFlag = false;
                    for(int i = 0; i < arrOfDeptSize;i++){
                        if(departmentName.get(i).equals(option2DeptUserInput)){
                            continueFlag = true;
                        }
                    }
                    if(continueFlag == false){
                        System.out.println("The department does not exist, hence, the instructor record cannot be added to the file.");
                        System.out.println();
                        break;
                    }
                    arrOfInstSize++;
                    for(int a = 0; a < arrOfDeptSize; a++){
                        if(option2DeptUserInput.equals(departmentName.get(a))){
                            instructorID.add(Integer.parseInt(option2IDUserInput));
                            instructorDepartment.add(option2DeptUserInput);
                            instructorName.add(option2NameUserInput);
                            if(option2DeptUserInput == "MATH"){
                                    instructorLocation.add("RLC");
                            }else if(option2DeptUserInput == "CMPT"){
                                instructorLocation.add("LEO");
                            }else{
                                    instructorLocation.add("RLC");
                                    break;
                            }
                        }
                    }
                    output.print("\n"+option2IDUserInput+","+option2NameUserInput+","+option2DeptUserInput);
                    output.close();
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
}
