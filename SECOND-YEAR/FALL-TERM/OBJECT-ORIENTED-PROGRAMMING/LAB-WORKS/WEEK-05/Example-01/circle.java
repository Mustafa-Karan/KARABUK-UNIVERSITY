public class circle {
    private final static double pi=3.141519;
    private double radius;
    public circle(double radius){
        this.radius=radius;
    }
    public double computeArea(){
        return pi*radius*radius;
    }
}