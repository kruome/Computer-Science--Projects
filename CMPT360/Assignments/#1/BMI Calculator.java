class BMI
{
    private String name;
    private int age;
    private double weight;
    private double height;
    
    BMI(String name, int age, double weight, double height){
        this.name = name;
        this.age = age;
        this.weight = weight;
        this.height = height;
    }
    BMI(String name, double weight, double height){
        this.name = name;
        this.weight = weight;
        this.height = height;
    }
    double getBMI(){
        return (weight*.453)/((height*.0254)*(height*.0254));
    }
    String getName(){
        return name;
    }
    String getStatus(){
        
        if(getBMI() >= 18.5 && getBMI() <= 24.9){
            return "Normal";
        }else if(getBMI() >= 25.0 && getBMI() <= 34.9)
        {
            return "Overweight";
        }else
        {
            return "Underweight";
        }
    }
}
public class Main
{
    public static void main(String[] args) {
        BMI b1 = new BMI("Joe", 120, 68);
        System.out.printf("The BMI is: %4.2f", b1.getBMI());
        System.out.println();
        System.out.println(b1.getName()+"'s BMI is " + b1.getStatus());
        
    }
}
