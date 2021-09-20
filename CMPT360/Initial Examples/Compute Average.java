package Initial_Examples;

import java.util.Scanner;

public class ComputeAverage {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
  
    
    double number1 = input.nextInt();
    double number2 = input.nextInt();
    double number3 = input.nextInt();
    
    double average = (number1 + number2 + number3)/3;
    
    System.out.println("The average of " + number1 + " " + number2 + " " + number3+ " " + " is " + average);
    }
}
