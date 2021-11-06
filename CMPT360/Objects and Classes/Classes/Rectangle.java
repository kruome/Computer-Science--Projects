class rec{
    double w;
    double h;
    
    rec(){
        w = 1;
        h = 1;
    }
    rec(double w, double h){
        this.w = w;
        this.h = h;
    }
    double getArea(){
        return w * h;
    }
    double getPerimeter(){
        return h*w*2;
    }
} 

public class Main
{
    public static void main(String[] args) {
        rec r1 = new rec(4, 40);
        rec r2 = new rec(3.5,35.9);
    
        System.out.println("The properties of Rectangle 1 are: ");
        System.out.println("Width: " + r1.w);
        System.out.println("Height: " + r1.h);
        System.out.println();
        System.out.printf("Area: %4.2f", r1.getArea());
        System.out.println();
        System.out.printf("Perimeter: %4.2f",r1.getPerimeter());
        System.out.println();
        System.out.println("The properties of Rectangle 2 are: ");
        System.out.println("Width: " + r2.w);
        System.out.println("Height: " + r2.h);
        System.out.println();
        System.out.printf("Area: %4.1f",r2.getArea());
        System.out.println();
        System.out.printf("Perimeter: %4.1f", r2.getPerimeter());
        
    }
}
