package quiz;

/**
 *
 * @author kdorji01
 */
public class BMI {
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
        return (weight*.45359237)/(height*.0254);
    }
    String getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    String getStatus(){
        if(getBMI() < 18.5){
            return "Underweight";
        } else if(getBMI() >= 18.5 || getBMI() <= 24.9){
            return "Normal Weight";
        } else if(getBMI() >= 25.0 || getBMI() <=29.9){
            return "Overweight";
        } else if(getBMI() <= 30.0 || getBMI() >= 34.9){
            return "Obesity class I";
        } else if(getBMI() <= 35.0 || getBMI() >= 39.9){
            return "Obesity class II";
        }else{
            return "Obesity class III";
        }
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        BMI obj = new BMI("Toby",20,198,70);
        System.out.print(obj.getName()+ " is " + obj.getStatus() + " and is " + obj.getAge() +  " years too old");
        
    }
  
}
