import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        System.out.print("Enter the first positive integer: ");
        Scanner int1 = new Scanner(System.in);
        int i1 = int1.nextInt();
        System.out.print("Enter the second positive integer: ");
        Scanner int2 = new Scanner(System.in);
        int i2 = int2.nextInt();
        
        int gcd = 1;
        int k = 2;
        
        while (k<i1 && k <= i2){
            if (i1 % k == 0 && i2 % k == 0){
                gcd = k;
            }
            k++;
        }
        System.out.print("The greatest common disivor for " + i1 + " and " + i2 + " is " + gcd);
    }
}

