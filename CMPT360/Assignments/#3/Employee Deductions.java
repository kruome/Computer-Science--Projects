import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        
        boolean info = true;
        int count = 0;
        
        do {
            System.out.print("Enter employee's name: ");
            Scanner name = new Scanner(System.in);
            String n = name.nextLine();
        
            System.out.print("Enter number of hours worked in a week: ");
            Scanner hours = new Scanner(System.in);
            double h = hours.nextDouble();
        
            System.out.print("Enter hourly pay rate: ");
            Scanner pay = new Scanner(System.in);
            double p = pay.nextDouble();
        
            System.out.print("Enter federal tax withholding rate: ");
            Scanner fedtax = new Scanner(System.in);
            double ftax = fedtax.nextDouble();
            
            double fwithholding = ftax * (h*p);
            
            if(ftax < 1.00){
                ftax = (ftax * 100);
            }else{
                info = false;
                break;
            }
            
            System.out.print("Enter state tax withholding rate: ");
            Scanner statetax = new Scanner(System.in);
            double stax = statetax.nextDouble();
            
            double swithholding = stax * (h*p);

            if(stax < 1.00){
                stax = (stax * 100);
            }else{
                info = false;
                break;
                
            }
            
            System.out.println("Employee Name: " + n);
            System.out.println("Hours worked: " + h);
            System.out.println("Pay Rate: $" + p);
            System.out.println("Gross Pay: $" + (h*p));
            System.out.println("Deductions: ");
            System.out.println("    Federal withholding " + "(" + ftax + "%):" + "$" +  fwithholding);
            System.out.println("    State withholding " + "(" + stax + "%):" + "$" +  swithholding  );
            System.out.println("Net Pay: $" + ((h*p)-(fwithholding+swithholding)));
            
        
            count++;
        }while((info && (count == 0))); 
        if(info == false){
            System.out.println("You entered your information incorrectly.");
        }          
    }
}

