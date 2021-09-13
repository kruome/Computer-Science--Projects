package selections;
import java.util.Scanner;
public class SpecificDay {
    public static void main(String[] args){    
       System.out.println("Please enter a number between 1 - 7: ");
       Scanner input = new Scanner(System.in);
       int answer = input.nextInt();
    
       if(answer == 1){
            System.out.println("The day is Sunday");
       }else if(answer == 2){
            System.out.println("The day is Monday");
       }else if(answer == 3){
            System.out.println("The day is Tuesday");
       }else if(answer == 4){
            System.out.println("The day is Wednesday");
       }else if(answer == 5){
            System.out.println("The day is Thursday");
       }else if(answer == 6){
            System.out.println("The day is Friday");
       }else if(answer == 7){
            System.out.println("The day is Saturday");
       }else{
            System.out.println("You have entered an invalid input.");
       }
    }
}
