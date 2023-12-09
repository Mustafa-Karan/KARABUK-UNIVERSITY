public class Sphere extends Shape3D {
    public Sphere(int depth,double radius){
        super(depth,radius);
    }
    public double getArea(){
        return 4*PI*width*width;
    }
    public double getVolume(){
        return ((double) 4 /3)*PI*width*width*width;
    }
}
