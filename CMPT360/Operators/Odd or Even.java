package Initial_Examples;
public class OddorEven {
    public static void main(String[] args){
        int num = 1 + (int)((Math.random()) * 10);
    
    System.out.println((num % 2 == 0)?num + " is even": num + " is odd");
    }
}
