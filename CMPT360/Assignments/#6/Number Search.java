public class Main
{
    public static int[] generateRandomArray(int arr[]){
        for(int i = 0; i < arr.length; i++){
            arr[i] = 1 + ((int)(Math.random() * 50));
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
        int min = arr[0];
        int minindex = 0;
        int temp = 0;
        
        for (int i = 0; i < arr.length; i++){
            min = arr[i];
            minindex = i;
            for ( int j = i + 1; j < arr.length; j++){
                if(arr[j] < min){
                    min = arr[j];
                    minindex = j;
                }
                arr[i] = temp;
                arr[i] = arr[minindex];
                arr[minindex] = temp;
            }
        }
    }
    public static void main(String[] args) {
        
    }
}
