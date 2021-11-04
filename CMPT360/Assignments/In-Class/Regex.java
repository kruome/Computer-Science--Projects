public class JavaApplication1 {

    public static void main(String[] args) {
        long a = 5;
        Long obj = new Long(a);
        
        Integer intobj = Integer.valueOf("10");
        
        System.out.println("This holds: " + obj.longValue());
        System.out.println("intobj holds: " + intobj.intValue());
        System.out.println("The max integer is " + Integer.MAX_VALUE);
        System.out.println("The max float is " + Float.MIN_VALUE);
        
        Integer[] intArray = {2,4,3};
        System.out.println(intArray[0] + intArray[1] + intArray[2]);
        
        
        String userinput = "kdorji01@manhattan.edu";
        System.out.println(userinput.matches("(\\w){5,10}@(manhattan|mancol)\\.edu"));
        
    }
}
