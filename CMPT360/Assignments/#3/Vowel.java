import java.util.Scanner;
public class letter{
    public static void main(String[] args){
        System.out.print("Enter a letter (a-z): ");
        Scanner usrinput = new Scanner(System.in);
        String s = usrinput.next();
        char v = s.charAt(0);

        if(Character.isLetter(v) == true){
            switch(v) {
            case 'a':
                System.out.println(v + " is a vowel.");
                break;
            case 'A':
                System.out.println(v + " is a vowel.");
                break;
            case 'e':
                System.out.println(v + " is a vowel.");
                break;
            case 'E':
                System.out.println(v + " is a vowel.");
                break;
            case 'i':
                System.out.println(v + " is a vowel.");
                break;
            case 'I':
                System.out.println(v + " is a vowel.");
                break;
            case 'o':
                System.out.println(v + " is a vowel.");
                break;
            case 'O':
                System.out.println(v + " is a vowel.");
                break;
            case 'u':
                System.out.println(v + " is a vowel.");
                break;
            case 'U':
                System.out.println(v + " is a vowel.");
                break;
            default:
                System.out.println(v + " is not a vowel.");
            }
        }
            else{
                System.out.println(v + " is an invalid input");
            }
        
    }
}
