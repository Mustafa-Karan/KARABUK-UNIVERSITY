public abstract class Shape2D {
    protected final static double PI=3.14;
    protected double height;
    protected double radius;
    protected double width;
    public Shape2D(double radius){
            this.radius=radius;
    }
    public Shape2D(double height, double width){
        this.height=height;
        this.width=width;
    }
    public abstract double getArea();

    @Override
    public String toString() {
        return "AREA:"+getArea();
    }
}