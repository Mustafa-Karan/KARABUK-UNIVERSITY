public class Cylinder extends circle {
    private double height;
   public Cylinder() {
       super();
       this.height = 1.0;
   }
    public Cylinder(double height) {
        super();
        this.height = height;
    }
    public Cylinder(double height, double radius) {
        super(radius);
        this.height = height;
    }
    public Cylinder(double height, double radius, String color) {
        super(radius, color);
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
