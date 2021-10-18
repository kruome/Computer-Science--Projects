class Circle2 {
  private double radius;
  /**No Contructor */
  /** Return the area of this circle */
  double getArea() {
    return radius * radius * Math.PI;
  }

  /** Return the perimeter of this circle */
  double getRadius() {
    return radius;
  }

  /** Set a new radius for this circle */
  void setRadius(double newRadius) {
    radius = newRadius;
  }
}
public class Circle {
  public static void main(String[] args) {
      Circle2 c1 = new Circle2();
      System.out.println("The radius is " + c1.getRadius());
      System.out.printf("The area is %.2f\n", c1.getArea());    
  }
}
