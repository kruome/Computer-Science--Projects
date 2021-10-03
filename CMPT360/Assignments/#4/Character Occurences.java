import java.util.Scanner;
public class Main
{
    public static void vowandcon(String x){
        int v = 0;
        int c = 0;
        for(int i = 0; i < x.length(); i++){
            if(Character.isLetter(x.charAt(i))){
                if(
                    x.charAt(i) == 'A' ||
                    x.charAt(i) == 'a' ||
                    x.charAt(i) == 'E' ||
                    x.charAt(i) == 'e' ||
                    x.charAt(i) == 'I' || 
                    x.charAt(i) == 'i' ||
                    x.charAt(i) == 'O' || 
                    x.charAt(i) == 'o' ||
                    x.charAt(i) == 'U' || 
                    x.charAt(i) == 'u'
                ){
                    v++;
                }else{
                    c++;
                }
            }
        }
        System.out.println("The number of vowels is: " + v);
        System.out.println("The number of consonants is: " + c);
    }
    public static void upandlow(String x){
        int up = 0;
        int low = 0;
        for(int i = 0; i < x.length(); i++){
            if(Character.isLetter(x.charAt(i))){
                if(Character.isUpperCase(x.charAt(i))){
                    up++;
                }else{
                    low++;
                }
            }
        }
        System.out.println("The number of uppercase characters is: " + up);
        System.out.println("The number of lowercase characters is: " + low);
        }
        
    public static void main(String[] args) {
        System.out.print("Enter a string: ");
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        vowandcon(s);
        upandlow(s);
    }
}
