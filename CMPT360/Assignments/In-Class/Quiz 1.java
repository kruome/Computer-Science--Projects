import java.util.Scanner;
package one.with.the.rainfall;

public class OneWithTheRainfall {

    public static double[] getMonthlyValues(){
        double[] monvalue = new double[12];
        
        Scanner userinput = new Scanner(System.in);
        for(int i = 0; i < monvalue.length; i++){
            System.out.print("Enter the rainfall value in inches for " + getMonthName(i) + ": ");
            double num = userinput.nextDouble();
            if(num<0){
                do{
                    System.out.print("Please enter a positive value for " + getMonthName(i) + ": ");
                    num = userinput.nextDouble();   
                }while(num < 0);
            }monvalue[i] = num;
        }
        return monvalue;
}
    public static double getTotalRainfall(double arr[]){
        double totalrainfall = 0;
        for(int i = 0; i < arr.length;i++){
            totalrainfall =  totalrainfall  + arr[i];
        }
        return totalrainfall;
    }
    public static double getAverageRainfall(double arr[]){
        return (getTotalRainfall(arr)/arr.length);
    }
    public static double getHighestValue(double arr[]){
        double max = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i]>max){
                max = arr[i];            }
        }
        return max;
    }
    public static String[] getHighestMonth(double arr[], double max){
        int size = 0;
        for(int i = 0; i < arr.length; i++){
                if(arr[i] == getHighestValue(arr)){
                    size++;
                }
        }
        
        String[] highestmonths = new String[size];
        
        int count = 0;
        
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == getHighestValue(arr)){
                highestmonths[count] = getMonthName(i);
                count++;
            }
        }
        return highestmonths;
    }
    public static String getMonthName(int key){
        String month = "";
        switch(key){
            case 0:
                month = "January";
                break;
            case 1:
                month = "February";
                break;
            case 2:
                month = "March";
                break;
            case 3:
                month = "April";
                break;
            case 4:
                month = "May";
                break;
            case 5:
                month = "June";
                break;
            case 6:
                month = "July";
                break;
            case 7:
                month = "August";
                break;
            case 8:
                month = "September";
                break;
            case 9:
                month = "October";
                break;
            case 10:
                month = "November";
                break;
            case 11:
                month = "December";
                break;
        }
        return month;
    }
    public static void main(String[] args) {
        
      double arr[] = getMonthlyValues();
      double rainfall = getTotalRainfall(arr);
      double max = getHighestValue(arr);
      String[] highestmonths = getHighestMonth(arr, max);
      System.out.println("The total rainfall for this year is: " + rainfall + " inches." );
      System.out.printf("The average ranfall for this year is %.2f"+ " inches.",getAverageRainfall(arr));
      System.out.println();
      System.out.print("The highest rainfall is " + max+ " inches and the months with highest rainfall are: ");
      for(int i = 0; i < highestmonths.length;i++){
          System.out.print(highestmonths[i] + " ");
      }
    }
}
