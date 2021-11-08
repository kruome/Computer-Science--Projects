import java.util.Scanner;

class Payroll {
    
    
    public static void main(String args[]){
        
        Payroll e1 = new Payroll("Joe", 1001);
        Scanner s1 = new Scanner(System.in);
        System.out.println("Please enter " + e1.getEmployeeName()+ "' hourly rate: ");
        Double initialinput = s1.nextDouble();
        System.out.println("Please enter " + e1.getEmployeeName()+ "' hours worked: ");
        Double finalinput = s1.nextDouble();
        System.out.println(e1.getEmployeeName()+ "'s gross pay is: " + e1.getGrossPay(initialinput,finalinput));
    }
    
    private String employeeName;
    private int ID;
    private double hourlyRate;
    private double numberOfHours;
    
    public Payroll(String employeeName, int ID){
        this.employeeName = employeeName;
        this.ID = ID;
    }
    public String getEmployeeName(){
        return employeeName;
    }
    public void setEmployeeName(String employeeName){
        this.employeeName = employeeName;
    }
    public int getID(){
        return ID;
    }
    public void setID(int ID){
        this.ID = ID;
    }
    public double getHourlyRate(){
        return hourlyRate;
    }
    public void setHourlyRate(double hourlyRate){
        this.hourlyRate = hourlyRate;
    }
    public double getNumberOfHours(){
        return numberOfHours;
    }
    public void setNumberofHours(double numberOfHours){
        this.numberOfHours = numberOfHours;
    }
    public double getGrossPay(double numberOfHours, double hourlyRate){
        return numberOfHours * hourlyRate;
    }
}



