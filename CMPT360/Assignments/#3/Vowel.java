import java.util.Scanner;
public class letter{
    public static void main(String[] args){
        System.out.println("Enter a letter (a-z): ");
        Scanner usrinput = new Scanner(System.in);
        String s = usrinput.next();
        char v = Character.toLowerCase(s.charAt(0));
        System.out.println("You entered: " + s );

        
    }
}
