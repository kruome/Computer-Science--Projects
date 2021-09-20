package Functions_char_strings;
import java.util.Scanner;
public class MathClass {
    public static void main(String[] args){
        //Char
        System.out.println((char)'\u0041');
        System.out.println((char)65);
        System.out.println('A');
        System.out.println();
        
        //Char methods
        System.out.println(Character.isLetterOrDigit('h'));
        System.out.println(Character.isLowerCase('h')); 
        System.out.println(Character.toUpperCase('h')); 
        System.out.println();
        System.out.println("hello".length());
        System.out.println("hello".charAt(1));
        System.out.println("Hello".toLowerCase());
        System.out.println("hello".toUpperCase());
        System.out.println("hello    ".trim());
        System.out.println("Hello".concat(" there"));
        System.out.println();
        //Check for letter case
        char ch = 'q';

        if (ch >= 'A' && ch <= 'Z') 
            System.out.println(ch + " is an uppercase letter"); 
        else if (ch >= 'a' && ch <= 'z') 
            System.out.println(ch + " is a lowercase letter"); 
        else if (ch >= '0' && ch <= '9') 
            System.out.println(ch + " is a numeric character"); 
        System.out.println();
        
        //Reading a string from the user
        Scanner input = new Scanner(System.in);
        System.out.print("Enter three words separated by spaces: ");
        String s1 = input.next();
        String s2 = input.next();
        String s3 = input.next();
        System.out.println("s1 is " + s1);
        System.out.println("s2 is " + s2);
        System.out.println("s3 is " + s3);
        System.out.println();

        //Math methods
        System.out.println(Math.floor(-10.71));
        System.out.println(Math.max(2.5, 2.53));
        System.out.println(Math.min(2.5, 2.51));
        System.out.println(Math.abs(-234));
        System.out.println(Math.random());
        System.out.println(Math.pow(2.5, -2));
        System.out.println(Math.log(255));
        System.out.println(Math.exp(2));
        System.out.println(Math.sqrt(4));
        System.out.println(Math.cos(0));
        System.out.println(Math.sin(0));
        System.out.println(Math.PI);
        System.out.println(Math.E);
        System.out.println();
        
        //Escape Seqyences for Special Characters
        System.out.println("Backspace      : " + "ABCDE\bFGHIJ");
        System.out.println("Formfeed       : " + "ABCDE\fFGHIJ");
        System.out.println("Linefeed       : " + "ABCDE\nFGHIJ");
        System.out.println("Single Quote   : " + "ABCDE\'FGHIJ");
        System.out.println("Double Quote   : " + "ABCDE\"FGHIJ");
        System.out.println("Backslash      : " + "ABCDE\\FGHIJ");
        System.out.println("Horizontal Tab : " + "ABCDE\tFGHIJ");   
        System.out.println("Carriage Return: " + "ABCDE\rFGHIJ");
        System.out.println();
    }
}
