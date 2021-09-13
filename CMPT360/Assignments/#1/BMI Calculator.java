import java.util.Scanner;
public class BMI {
    public static void main(String[] args) {
        System.out.println("Welcome to the BMI calculator!");
        System.out.println("Enter your weight in pounds:");
        Scanner weight = new Scanner(System.in);
        double weight1 = weight.nextDouble();
        double weight2 = weight1 * .45359237;
        System.out.println("Enter your height in inches:");
        Scanner height = new Scanner(System.in);
        double height1 = height.nextDouble();
        double height2 = height1 * .0254;
        System.out.println("Your BMI is: " + weight2 / (height2 * height2));
    }
}
