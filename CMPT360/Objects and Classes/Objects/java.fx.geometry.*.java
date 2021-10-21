import javafx.geometry.*;
public class Circle{
    public static void main(String[] args){
        Point2D p1 = new Point2D(2,3);
        Point2D p2 = new Point2D(4,5);
        
        System.out.println("p1 is " + p1.toString());
        System.out.println("Distance between p1 and p2: " + p1.distance(p2));
        System.out.println("Distance between p1 and p2: " + p1.distance(4,5));
        System.out.println("Midpoint between p1 and p2: " + p1.midpoint(p2));
        System.out.println("x-coordinate of midpoint: " + p1.midpoint(p2).getX());
    }
}
