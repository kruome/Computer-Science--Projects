```java
import java.util.Scanner;
public class Compare {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    
    System.out.println("Enter your first and last name: ");
    String fname = input.nextLine();
    String[] parts = (fname.split(" "));
    System.out.println("Your first name is: " + parts[0] + " and your last name is: " + parts[1]);
  }
}
```
------------------------------------------------------------------------------------------------------------------------
```java
import java.util.Scanner;
public class Compare {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    
    System.out.println("Enter your first and last name: ");    
    String fname = input.nextLine();
    int k = fname.indexOf(' ');
    System.out.println("Your first name is: " + fname.substring(0, k) + " and your last name is:" + fname.substring(k));
  }
}
```
