import java.io.File; 

import java.util.Scanner; 

import java.io.FileNotFoundException; 

  

class Student{ 

        private int ID; 

        private String name; 

        private String dept; 

         

        public Student(){ 

            ID = 0; 

            name = ""; 

            dept = ""; 

        } 

        public Student(int ID, String name, String dept){ 

            this.ID = ID; 

            this.name = name; 

            this.dept = dept; 

        } 

          

        public int getID(){ 

            return ID; 

        } 

        public void setID(int ID){ 

            this.ID = ID; 

        } 

        public String getName(){ 

            return name; 

        } 

        public void setDept(String dept){ 

            this.dept = dept; 

        } 

        public String getdept(){ 

            return dept; 

        } 

        public void setName(String name){ 

            this.name = name; 

        } 

    } 

public class Main{ 

     

    public static void main(String[] args) throws java.io.IOException{ 

         

        File file = new File("test.txt"); 

        Scanner input = new Scanner(file); 

        File file2 = new File("test.txt"); 

        Scanner input2 = new Scanner(file2); 

         

        int arrsize = 0; 

        while(input.hasNextLine()){ 

            arrsize++; 

            input.nextLine(); 

        } 

         

        Student[] students = new Student[arrsize]; 

        for(int i = 0; i<students.length;i++){ 

            students[i] = new Student(); 

        } 

         

         

        for(int j = 0; j < students.length;j++){ 

            String line = input2.nextLine(); 

            String[] fields = line.split(","); 

            int i = Integer.parseInt(fields[0]); 

            String n = fields[1]; 

            String d = fields[2]; 

            students[j] = new Student(i,n,d); 

        } 

        System.out.println("Enter student id (-1 to exit): "); 

        Scanner ui = new Scanner(System.in); 

        int userin = ui.nextInt(); 

        if(userin == -1){ 

            System.out.println("Thank you and goodbye."); 

        }else{ 

        do{ 

  

                int counter = 0; 

                for(int i = 0; i <students.length;i++){ 

                if(userin == students[i].getID()){ 

                    System.out.println("Name: " + students[i].getName()); 

                    System.out.println("Dept: " + students[i].getdept());  

                    System.out.println(); 

                }else{ 

                    counter++; 

                } 

            } 

            if(counter == students.length){ 

                System.out.println("No student found."); 

                System.out.println(); 

                System.out.println("Enter student id (-1 to exit): "); 

  

            }else{ 

            System.out.println("Enter student id (-1 to exit): "); 

            } 

            userin = ui.nextInt(); 

            counter = 0; 

  

        }while(userin!=-1); 

    } 

         

    } 

}
