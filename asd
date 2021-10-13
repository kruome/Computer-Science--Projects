public class Main
{
    public static int[] generateRandomArray(){  
        int[] arr = new int[20];
        for(int i = 0; i < arr.length; i++){
            arr[i] = 1 + ((int)(Math.random() * 50));
        }
        return arr;
    }
    
    public static int generateRandomKey(){
        return 1 + ((int)Math.random() * 50);
    }
    
    public static void printArray(int arr[]){
         for(int i = 0; i< arr.length;i++){
             System.out.print(arr[i] + " ");
         }
     }
    public static void main(String[] args) {
        int[] arr = generateRandomArray();
        System.out.print("The randomly generated array is: ");
        printArray(arr);
    }
}
