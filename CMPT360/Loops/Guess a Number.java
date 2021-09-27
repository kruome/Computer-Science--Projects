import java.util.Scanner;
public class Main{
    public static void main(String[] args){
       
        int number = (int)(Math.random() * 101);
        System.out.println("Guess the magic number between 0 and 100");
        Scanner input = new Scanner(System.in);
        int guess = -1;
        
        while(guess != number){
            System.out.println("\nEnter your guess: ");
            guess = input.nextInt();
            
            if (guess == number){
                System.out.print("Yes, the number is " + number);
            }else if(guess > number){
                System.out.print("Your guess is too high");
            } else{
                System.out.print("Your guess is too low.");
            }
        }
    }
}
