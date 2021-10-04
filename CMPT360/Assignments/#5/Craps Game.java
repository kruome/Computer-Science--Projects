
public class Main
{
    public static int getDice(){
        return (1 + (int)((Math.random() * 6)));
    }
    public static void main(String[] args) {
        int r1 = getDice();
        int r2 = getDice();
        int result = r1 + r2;
        int fresult = 0;
        int point = 0;
        System.out.println("You rolled " + r1 + " + " + r2 + " = " + result);
        
        switch(result){
            case 2:
                System.out.println("You lose");
                break;
            case 3:
                System.out.println("You lose");
                break;
            case 7:
                System.out.println("You win");
                break;
            case 11:
                System.out.println("You win");
                break;
            case 12:
                System.out.println("You lose");
                break;
            default:
                point = result;
                System.out.println("Point is " + point);
                while( result != 7 || fresult != point){
                    r1 = getDice();
                    r2 = getDice();
                    fresult = r1 + r2;
                    if(fresult == 7){
                        System.out.println("You rolled " + r1 + " + " + r2 + " = " + fresult);
                        System.out.println("You lose");
                        break;
                    }else if(fresult == point){
                        System.out.println("You rolled " + r1 + " + " + r2 + " = " + fresult);
                        System.out.println("You win");
                        break;
                    }else{
                        continue;
                    }
              }
        }
    }
}
