package JavaApplication1;

import java.util.Scanner;
import javafx.application.Application;
import java.util.regex.*;
import java.io.FileNotFoundException;
import java.io.*;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.stage.Stage;
import javafx.scene.layout.StackPane;
import javafx.scene.control.Button;
import javafx.scene.Scene;
import javafx.scene.Node;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.CornerRadii;
import javafx.scene.paint.Color;
import javafx.scene.text.Text;


public class JavaApplication1 extends Application{
    Scene mainScreen;
    Scene option1Layout;
    StackPane mainLayout;
    StackPane option1layout;
    Button button1;
    Button button2;
    Button button3;
    Button submitButtonOption1;
    Button returnButton;
    Label option1label;
    Label option1InstructorName;
    Label option1InstructorDepartment;
    Label option1InstructorLocation;
    TextField instructorIDField;
    
    Label error1;
  public static void main(String[] args){
    launch(args);
  }
    @Override
  public void start(Stage primaryStage) throws FileNotFoundException{
      
    ArrayList<Integer> departmentFund = new ArrayList<Integer>();
    ArrayList<String> departmentName = new ArrayList<String>();
    ArrayList<String> departmentLocation = new ArrayList<String>();
    
    
      primaryStage.setTitle("Primary Project");
      button1 = new Button();
      button1.setText("1. Get instructor information");
     
      button2 = new Button();
      button2.setText("2. Insert a new instructor");
      
      button3 = new Button();
      button3.setText("3. Exit");
      
      returnButton = new Button();
      returnButton.setText("Go back to main menu");
      
      submitButtonOption1 = new Button();
      submitButtonOption1.setText("Ok");
      
      mainLayout = new StackPane();
      option1layout = new StackPane();
      
      button1.setTranslateX(0);
      button1.setTranslateY(-50);
      button2.setTranslateX(0);
      button2.setTranslateY(0);
      button3.setTranslateX(0);
      button3.setTranslateY(50);
      returnButton.setTranslateX(0);
      returnButton.setTranslateY(100);
      submitButtonOption1.setTranslateX(0);
      submitButtonOption1.setTranslateY(30);
      
      option1label = new Label("Enter instructor ID: ");
      option1label.setTranslateX(0);
      option1label.setTranslateY(-50);
      
      instructorIDField = new TextField();
      instructorIDField.setPrefWidth(80);
      instructorIDField.setMaxWidth(80);
      
      Scene mainScreen = new Scene (mainLayout,600,300);
      Scene optionScreen = new Scene(option1layout,600,300);
      primaryStage.setScene(mainScreen);
      primaryStage.show();
      mainLayout.getChildren().add(button1);
      mainLayout.getChildren().add(button2);
      mainLayout.getChildren().add(button3);
      
      button1.setOnAction((ActionEvent event) -> {
          primaryStage.setScene(optionScreen);
          option1layout.getChildren().add(returnButton);
          option1layout.getChildren().add(submitButtonOption1);
          option1layout.getChildren().add(instructorIDField);
          option1layout.getChildren().add(option1label);
    });
      button2.setOnAction((ActionEvent event) -> {
          primaryStage.setScene(optionScreen);
          option1layout.getChildren().add(returnButton);
    });
      button3.setOnAction((ActionEvent event) -> {
          System.exit(0);
    });
      returnButton.setOnAction((ActionEvent event) -> {
          option1layout.getChildren().clear();
          primaryStage.setScene(mainScreen);
          primaryStage.show();
    });
      submitButtonOption1.setOnAction(new EventHandler<ActionEvent>() {
        @Override
        public void handle(ActionEvent event) {
            String strID = instructorIDField.getText();
            if(strID.matches("\\d{4}")){
                try {
                    File instructorFile = new File("C:\\Users\\library.guest\\Downloads\\instructor.txt");
                    Scanner instructorDatabase = new Scanner(instructorFile);
                    File instructorFileSize = new File("C:\\Users\\library.guest\\Downloads\\instructor.txt");
                    Scanner instructorDatabaseSize = new Scanner(instructorFileSize);
                    
                    File departmentFile = new File("C:\\Users\\library.guest\\Downloads\\department.txt");
                    Scanner departmentDatabase = new Scanner(departmentFile);
                    File departmentFileSize = new File("C:\\Users\\library.guest\\Downloads\\epartment.txt");
                    Scanner departmentDatabaseSize = new Scanner(departmentFile);
                    
                    int ID = Integer.parseInt(strID);
                    
                    int arrOfDeptSize = 0;
                    while (departmentDatabaseSize.hasNextLine()) {
                        arrOfDeptSize++;
                        departmentDatabaseSize.nextLine();
                    }
                    for (int j = 0; j < arrOfDeptSize; j++) {
                        String line = departmentDatabase.nextLine();
                        String[] deptField = line.split(",");
                        departmentName.add(deptField[0]);
                        departmentLocation.add(deptField[1]);
                        departmentFund.add(Integer.parseInt(deptField[2].trim()));
                    }
                    
                    ArrayList<Integer> instructorID = new ArrayList<>();
                    ArrayList<String> instructorName = new ArrayList<>();
                    ArrayList<String> instructorDepartment = new ArrayList<>();
                    ArrayList<String> instructorLocation = new ArrayList<>();
                    
                    int arrOfInstSize = 0;
                    while (instructorDatabaseSize.hasNextLine()) {
                        arrOfInstSize++;
                        instructorDatabaseSize.nextLine();
                    }
                    for (int j = 0; j < arrOfInstSize; j++) {
                        String line = instructorDatabase.nextLine();
                        String[] instrucField = line.split(",");
                        instructorID.add(Integer.parseInt(instrucField[0].trim()));
                        instructorName.add(instrucField[1]);
                        instructorDepartment.add(instrucField[2]);
                        for (int a = 0; a < arrOfDeptSize; a++) {
                            if (instructorDepartment.get(j).equals(departmentName.get(a))) {
                                instructorLocation.add(j, departmentLocation.get(a));
                            }
                        }
                    }
                    boolean option1flag = false;
                    for(int i = 0; i < arrOfInstSize;i++){
                        if(instructorID.get(i) == ID){
                            option1InstructorName = new Label("Instructor Name: " + instructorName.get(i));
                            option1InstructorDepartment = new Label("Instructor Department: " + instructorDepartment.get(i));
                            option1InstructorLocation = new Label("Department Location: " + instructorLocation.get(i));
                            option1InstructorName.setTranslateX(0);
                            option1InstructorName.setTranslateY(-50);
                            option1InstructorDepartment.setTranslateX(0);
                            option1InstructorDepartment.setTranslateY(-25);
                            option1InstructorLocation.setTranslateX(0);
                            option1InstructorLocation.setTranslateY(0);
                            removeButtons();
                            option1layout.getChildren().add(option1InstructorName);
                            option1layout.getChildren().add(option1InstructorDepartment);
                            option1layout.getChildren().add(option1InstructorLocation);
                            option1flag = true;
                            clearTextField();
                        }
                    }
                    if(option1flag == false){
                        removeButtons();
                        error1 = new Label("The ID does not exist in the file. Please try another ID.");
                        option1layout.getChildren().add(error1);
                        clearTextField();
                        
                    }
                    
                } catch (FileNotFoundException ex) {
                    Logger.getLogger(JavaApplication1.class.getName()).log(Level.SEVERE, null, ex);
                }
            }else{
                error1 = new Label("Invalid input. Please press the go back button and try again.");
                option1layout.getChildren().add(error1);
                removeButtons();
                clearTextField();
            }
        }
    });
  }
  public void removeButtons(){
                 option1layout.getChildren().remove(submitButtonOption1);
                 option1layout.getChildren().remove(option1label);
                 option1layout.getChildren().remove(instructorIDField);
      }
  public void clearTextField(){
      instructorIDField.setText(null);
  }
}
/*
        userOption = userInput.nextInt();
        switch(userOption){
            case 1:
                System.out.println();
                System.out.print("Enter the instructor ID: ");
                option1UserInput = option1.nextInt();
                
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
*/
