package selections;

import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args){
        Scanner next = new Scanner(System.in);
        System.out.println("Enter a year: ");
        int year = next.nextInt();
        
    boolean LeapYear =
        (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
    
   System.out.println(year + " is a leap year: " + LeapYear);
    }
}
