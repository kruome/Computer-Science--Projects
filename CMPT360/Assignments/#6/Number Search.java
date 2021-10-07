public class JavaApplication4
{
    public static int[] generateRandomArray(){
        int arr[] = new int[20];
        for(int i = 0; i < 20; i++){
             arr[i]= 1 + ((int)(Math.random() * 50));
        }
        return arr;
    }
    public static int generateRandomKey(){
        return 1 + ((int)(Math.random() * 50));
    }
    public static void printArray(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }
    public static int binarySearch(int[] list, int key){
        int first = 0;
        int last = list.length - 1;
        while (last>=first){
            int mid = (first + last) / 2;
            if(key < list[mid]){
                last = mid - 1;
            }else if(key == list[mid]){
                return mid;
            } else{
                first = mid + 1;
            }
        }
        return - 1 - first;
    }
    public static int linearSearch(int[] list, int key){
            for(int i = 0; i < list.length; i++){
                if(key == list[i]){
                    return i;
                }
            }
            return -1;
        }
    
    public static void selectionSort(int arr[]){
        for (int i = 0; i < arr.length-1; i++){
            int min = i; 
            for (int j = i+1; j < arr.length; j++) 
                if (arr[j] < arr[min]) 
                    min = j; 
              int temp = arr[min]; 
            arr[min] = arr[i]; 
            arr[i] = temp; 
        }
    }

    
    public static void main(String[] args) {
        int arr[] = generateRandomArray();
        System.out.print("The randomly generated array of numbers is: ");
        for(int i:arr){
            System.out.print(i + " ");
        }
        System.out.println();
        
        int randomkey = generateRandomKey() ;
        System.out.println("The randomly generated key is: " + randomkey);          
        if(linearSearch(arr,randomkey) == -1){
            System.out.println("Using linear search, the key is not found in the original array.");
        }else{
            System.out.println("Using linear search, the key is found at index: " + linearSearch(arr,randomkey) + " within the sorted array.");
        }
        selectionSort(arr);
        
        System.out.print("The sorted array using selection sort is: "); 
        for(int value:arr){
            System.out.print(value +  " ");
        }
    
        System.out.println();
        
        if(binarySearch(arr,randomkey) <= -1){
            System.out.println("Using binary search, the key is not found in the sorted array but if it exited, it would be at position: " + -1*binarySearch(arr,randomkey));
        }else{
            System.out.println("Using binary search, the index of the key is found at index " + binarySearch(arr,randomkey) + " within the sorted array");
        }
    }
}
