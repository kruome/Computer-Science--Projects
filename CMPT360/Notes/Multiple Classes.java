public class Untitled4{
    public static void main(String[] args){
        String[] strings = {"New York", "Boston", "Atlanta"};
    B.main(strings);
    }
}
class B{
    public static void main(String[] args){
        for(int i = 0; i < args.length; i++){
            System.out.println(args[i]);
        }
    }
}
