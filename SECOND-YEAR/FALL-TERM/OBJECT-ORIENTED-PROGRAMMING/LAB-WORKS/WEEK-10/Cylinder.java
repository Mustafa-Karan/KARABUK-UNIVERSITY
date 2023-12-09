public class Cylinder extends Shape3D {
    public Cylinder(double height,double radius){
        super(height,radius);
    }
    public double getArea(){
        return 2*PI*width*height+2*PI*width*width;
    }
    public double getVolume(){
        return PI*width*width*height;
    }
}