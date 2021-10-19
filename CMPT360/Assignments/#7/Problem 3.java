import java.util.Random;
public class Main{
    public static void main(String[] args){
        Random r1 = new Random();
        for(int i = 0; i < 10;i++){
            int flag = r1.nextInt(100);
            boolean f = false;
            if(flag<50){
                f = true;
                while(f){
                    flag = r1.nextInt(100);
                    if(flag > 50){
                        f = false;
                    }
                }
            }
            System.out.println("Random integer #" + (i + 1) + " is " + flag);
        }
    }
}
