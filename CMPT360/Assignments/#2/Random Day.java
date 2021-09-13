public class RandomDay {
    public static void main(String[] args){
        int number1 = 1+((int)(Math.random() * 7));
        String day = "";
    switch(number1){
        case 1:
            day = "Sunday";
            break;
        case 2:
            day = "Monday";    
            break;
        case 3:
            day = "Tuesday";
            break;
        case 4:
            day = "Wednesday";
            break;
        case 5:
            day = "Thursday";
            break;
        case 6:
            day = "Friday";   
            break;
        case 7:
            day = "Saturday";
            break;
    }
                
    System.out.println("The number generated was " + number1 + ". The day is " + day);
    }
   
}
