public class Cylinder extends circle {
    private double height;
   public Cylinder() {
       super(); // Üst sınıfın parametresiz kurucu metodunu çağır
       this.height = 1.0;
   }
    public Cylinder(double height) {
        super(); // Üst sınıfın parametresiz kurucu metodunu çağır
        this.height = height;
    }
    public Cylinder(double height, double radius) {
        super(radius); // Üst sınıfın tek parametreli kurucu metodunu çağır
        this.height = height;
    }
    public Cylinder(double height, double radius, String color) {
        super(radius, color); // Üst sınıfın iki parametreli kurucu metodunu çağır
        this.height = height;
    }
    public double getHeight(){
        return height;
    }
    public void setHeight(double height){
        this.height=height;
    }
    public String toString(){
        return "Height: "+height+" Radius: "+super.getRadius()+" Color: "+super.getColor()+" Volume:"+getVolume();
    }
    public double getVolume(){
        return super.getArea()*this.height;
    }
}