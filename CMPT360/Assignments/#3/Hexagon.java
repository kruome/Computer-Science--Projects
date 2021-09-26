import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        System.out.print("Enter the side: ");
        Scanner num = new Scanner(System.in);
        String n = num.nextLine();
        double area = 0;
        if((Character.isDigit(n.charAt(0)) == true)){
            double number = Double.parseDouble(n);
            area = (6 * Math.pow(number,2)) / (4 * Math.tan(Math.PI/6));
            System.out.println("The area of the hexagon is " + area);

        }else{
            System.out.println("Invalid input.");
        }
    }
}
