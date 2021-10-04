package javaapplication4;
import java.util.Scanner;
public class JavaApplication4 {
    public static void main(String[] args) {
        double[] myList = new double[10];
        Scanner input = new Scanner(System.in);
        for(int i = 0;i<myList.length;i++){
            myList[i] = input.nextDouble();
        }
        for(int i = 0;i<myList.length;i++){
            System.out.println(myList[i]);
        }
        /*for(int i = 0; i < 10; i++){
            myList[i] = (int)(Math.random() * 100);
            System.out.print(myList[i] + " ");
        }*/
    }
    
}
