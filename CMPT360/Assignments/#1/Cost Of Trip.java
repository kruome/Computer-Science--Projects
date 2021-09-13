import java.util.Scanner;
public class Cost_of_Driving {
    public static void main(String[] args) {
        System.out.println("Cost of trip calculator:");
        System.out.println("Enter the driving distance: ");
        Scanner distance = new Scanner(System.in);

        double totaldistance = distance.nextDouble();

        System.out.println("Enter miles per gallon: ");
        Scanner miles = new Scanner(System.in);
        double milespergallon = totaldistance / miles.nextDouble();

        System.out.println("Enter miles per gallon: ");
        Scanner price = new Scanner(System.in);
        double price1 = price.nextDouble();

        System.out.println("The cost of driving is: $" + milespergallon * price1);
    }
}
