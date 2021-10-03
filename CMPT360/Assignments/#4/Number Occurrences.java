import java.util.Scanner;
public class Main
{
    public static void main(String[] args) {
        System.out.print("Enter numbers:  ");
        Scanner num = new Scanner(System.in);
        int max = num.nextInt();
        int n = max;
        int c = 1;
        while(n > 0){
            n = num.nextInt();
            
            if(n > max){
                max = n;
                c = 1;
            }
            if(n == max){
                c++;
            }
        }
        System.out.println("The largest nunmber is: " + max);
        System.out.println("The occurence count of the largest number is: " + c);
    }
}
