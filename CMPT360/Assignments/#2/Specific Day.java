package selections;
import java.util.Scanner;
public class SpecificDay {
    public static void main(String[] args){    
       System.out.println("Please enter a number between 1 - 7: ");
       Scanner input = new Scanner(System.in);
       int answer = input.nextInt();
    
       if(answer >= 1 && answer <= 7){
           switch(answer){
               case 1:
                   System.out.println("The day is Sunday");
                   break;
               case 2:
                   System.out.println("The day is Monday");
                   break;
               case 3:
                   System.out.println("The day is Tuesday");
                   break;
               case 4:
                   System.out.println("The day is Wednesday");
                   break;
               case 5:
                   System.out.println("The day is Thursday");
                   break;
                case 6:
                   System.out.println("The day is Friday");
                   break;
                case 7:
                   System.out.println("The day is Saturday");
                   break;
           } 
       }else{
            System.out.println("You have entered an invalid input.");
       }
    }
}
