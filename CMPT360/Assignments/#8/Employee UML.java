package Emplyee.Employee;
public class Employee {
   private String name;
   private int idnumber;
   private String department;
   private String position;
   
   Employee(String name, int idnumber, String department, String position){
       this.name = name;
       this.idnumber = idnumber;
       this.department = department;
       this.position = position;
   }
   Employee(String name, int idnumber){
       this.name = name;
       this.idnumber = idnumber;
       department = "";
       position = "";
   }
   Employee(){
       name = "";
       idnumber = 0;
       department = "";
       position = "";
   }
   String getName(){
       return name;
   }
   void setName(String name){
       this.name = name;
   }
   int getIdnumber(){
       return idnumber;
   }
   void setIdnumber(int idnumber){
       this.idnumber = idnumber;
   }
   String getDepartment(){
       return department;
   }
   void setDepartment(String department){
       this.department = department;
   }
   String getPosition(){
       return position;
   }
   void setPosition(String position){
       this.position = position;
   }
   public static void main(String args[]){
       Employee e1 = new Employee("Susan Meyers",47899,"Accounting", "Vice President");
       Employee e2 = new Employee("Mark Jones",39119,"IT", "Programmer");
       Employee e3 = new Employee("Joy Rogers",81774,"Manufacturing", "Engineer");
       
       System.out.print("       Name         |   ID Number   |   Department  |        Position       |");
       System.out.println();
       System.out.println("-------------------------------------------------------------");
       System.out.println("   " + e1.name + "           " + e1.idnumber + "        " + e1.department + "         " + e1.position);
       System.out.println("    " + e2.name + "            " + e2.idnumber + "            " + e2.department + "               " + e2.position);
       System.out.println("    " + e3.name + "            " + e3.idnumber + "       " + e3.department + "          " + e3.position);

   }
}
