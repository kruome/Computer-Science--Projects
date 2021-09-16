package Initial_Examples;
import java.util.Scanner;

public class RockPaperScissors {
    public static void main(String[] args){
        int cpu = (int)(Math.random() * 3);
        System.out.println("Please enter a value from 0-2: ");
        Scanner input = new Scanner(System.in);
        int user = input.nextInt();
        
        String userchoice = " ";
        String cpuchoice = " ";
        String message = " ";
        if(user < 0 || user > 2){
            System.out.println("The entered value is invalid.");
        }else{
            switch(user){
                case 0:
                    userchoice = "rock";
                    break;
                case 1: 
                    userchoice = "paper";
                    break;
                case 2:
                    userchoice = "scissor";
                    break;
            }switch(cpu){
                case 0:
                    cpuchoice = "rock" ;
                    break;
                case 1: 
                    cpuchoice = "paper";
                    break;
                case 2:
                    cpuchoice = "scissor";
                    break;
            }
            if(user == cpu){
                message = "It is a draw.";
            } else if((user == 0 && cpu == 1) || (user == 1 && cpu == 2) || (user == 2 && cpu == 0)){
                message = "You lost";
            }else{
                message = "You won";
            }
            if(userchoice == cpuchoice){
                System.out.println("Both you and the cpu has chosen " + cpuchoice + ". " + message);
            } else if ((user == 0 && cpu == 1) || (user == 1 && cpu == 2) || (user == 2 && cpu == 0)){
                System.out.println("The cpu chose " + cpuchoice + "." + "You have chosen " + userchoice + ". " + message);
            } else{
                System.out.println("The cpu chose " + cpuchoice + "." + "You have chosen " + userchoice + ". " + message);
            }
        }
    }
}
