import java.util.Scanner;
import javafx.application.Application;
import java.util.regex.*;
import java.io.FileNotFoundException;
import java.io.*;
import java.util.ArrayList;
import javafx.stage.Stage;
import javafx.scene.layout.StackPane;
import javafx.scene.control.Button;
import javafx.scene.Scene;
import javafx.scene.Node;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;

public class JavaApplication1 extends Application{
    Button button1;
    Button button2;
    Button button3;
  public static void main(String[] args)throws java.io.IOException{
    launch(args);
  }
    @Override
  public void start(Stage primaryStage){
      primaryStage.setTitle("Primary Project");
      button1 = new Button();
      button1.setText("1. Get instructor information");
     
      button2 = new Button();
      button2.setText("2. Insert a new instructor");
      
      button3 = new Button();
      button3.setText("3. Exit");
      
      StackPane layout = new StackPane();
      button1.setLayoutX(0);
      button1.setLayoutY(100);
      button2.setLayoutX(300);
      button2.setLayoutY(200);
      button2.setLayoutX(300);
      button2.setLayoutY(300);
      layout.getChildren().add(button1);
      layout.getChildren().add(button2);
      layout.getChildren().add(button3);
      button3.setOnAction((EventHandler<ActionEvent>) this);
      
      Scene scene = new Scene (layout,600,300);
      primaryStage.setScene(scene);
      primaryStage.show();
  }
  public void handle(ActionEvent event){
      if(event.getSource()==button3){
        System.out.println();
        System.out.println("Exited.");
        System.out.println();
      }
  }
}
/*
    File instructorFile = new File("C:\\Users\\kdorji01\\Documents\\NetBeansProjects\\JavaApplication1\\src\\javaapplication1\\instructor.txt");
    Scanner instructorDatabase = new Scanner(instructorFile);
    File instructorFileSize = new File("C:\\Users\\kdorji01\\Documents\\NetBeansProjects\\JavaApplication1\\src\\javaapplication1\\instructor.txt");
    Scanner instructorDatabaseSize = new Scanner(instructorFileSize);
    
    File departmentFile = new File("C:\\Users\\kdorji01\\Documents\\NetBeansProjects\\JavaApplication1\\src\\javaapplication1\\department.txt");
    Scanner departmentDatabase = new Scanner(departmentFile);
    File departmentFileSize = new File("C:\\Users\\kdorji01\\Documents\\NetBeansProjects\\JavaApplication1\\src\\javaapplication1\\department.txt");
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
            if(instructorDepartment.get(j).equals(departmentName.get(a))){
                instructorLocation.add(j,departmentLocation.get(a));
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
                        break;
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
                    if(option2DeptUserInput.matches("[A-Z]{4}")||option2DeptUserInput.matches("[A-Z]{3}")){
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
                            switch (option2DeptUserInput) {
                                case "MATH":
                                    instructorLocation.add("RLC");
                                    break;
                                case "BIO":
                                    instructorLocation.add("LEO");
                                    break;
                                default:
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
  }*/
