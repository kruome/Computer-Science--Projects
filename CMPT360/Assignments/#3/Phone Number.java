import java.util.Scanner;
public class telephone{
    public static void main(String[] args){
        System.out.print("Enter a phone number: ");
        Scanner num = new Scanner(System.in);
        String n = num.nextLine();
        boolean valid;
        String val = "";
        
        if((n.length() == 12) && (Character.isDigit(n.charAt(0))&& (Character.isDigit(n.charAt(1))&& (Character.isDigit(n.charAt(2))
        && (n.charAt(3) == '-') && (Character.isDigit(n.charAt(4))&& (Character.isDigit(n.charAt(5))&& (Character.isDigit(n.charAt(6))
        && (n.charAt(7) == '-')&& (Character.isDigit(n.charAt(8))&& (Character.isDigit(n.charAt(9))&& (Character.isDigit(n.charAt(10))&& (Character.isDigit(n.charAt(11))))))))))))){
            valid = true;
        }else{
            valid = false;
        }
        
        if(valid){
            val = "is a valid number.";
        }else{
            val = "is an invalid number.";
        }
        System.out.println(n + val);
    }
}
