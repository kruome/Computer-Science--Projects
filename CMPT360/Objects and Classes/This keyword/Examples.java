public class TotalArea{
    private int x = 10;
    private int y = 5;
    
    public TotalArea(){
        
    }
    public void p(){
        int x = 1;
        System.out.println("x = " + this.x); //This refers to the current object you are using
        System.out.println("y = " + y);
    }
    
    public static void main(String args[]){
        TotalArea t = new TotalArea();
        t.p();
    }
}

/*public class Circle{
    private double radius;
    public Circle(double radius){
        this.radius = radius;
    }
}*/
