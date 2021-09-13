public class Cards {
    public static void main(String[] args){
        String r = " ";
        String s = " ";
        int rr1 = 1 + ((int)(Math.random() * 13));
        int ss1 = 1 + ((int)(Math.random() * 4));
        
        switch(rr1){
            case 1:
                r = "Ace";
                break;
            case 2:
                r = "2";
                break;
            case 3:
                r = "3";
                break;
            case 4:
                r = "4";
                break;
            case 5:
                r = "5";
                break;
            case 6:
                r = "6";
                break;
            case 7:
                r = "7";
                break;
            case 8:
                r = "8";
                break;
            case 9:
                r = "9";
                break;
            case 10:
                r = "10";
                break;
            case 11:
                r = "Jack";
                break;
            case 12:
                r = "Queen";
                break;
            case 13:
                r = "King";
                break;
        }
        switch(ss1){
            case 1:
                s = "Clubs";
                break;
            case 2:
                s = "Diamonds";
                break;
            case 3:
                s = "Hearts";
                break;
            case 4:
                s = "Spades";
                break;
        }
        System.out.println("The card you picked is " + r + " of " + s);
    }
}
