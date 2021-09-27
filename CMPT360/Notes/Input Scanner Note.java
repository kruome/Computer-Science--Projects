import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        int age;
        String name;
        
        System.out.print("Enter your age: ");
        age = input.nextInt();
        
        input.nextLine();
        
        System.out.print("Enter your name: ");
        name = input.nextLine();
        
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}
