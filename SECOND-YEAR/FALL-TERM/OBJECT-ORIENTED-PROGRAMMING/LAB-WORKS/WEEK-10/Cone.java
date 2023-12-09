public class Cone extends Shape3D{


    public Cone(double height,double radius){
        super(height,radius);

    }
    public double getVolume(){
        return ((double) 1 /3)*PI*height*width*width;
    }
    public double getArea(){
        double a=Math.sqrt((height*height)+(width*width));//pythagorean theorem width is actually radius
        return PI*width*a+PI*width*width;                 //Cone is child Shape3D,Shape3D extends Shape2D
                                                          //in Shape2D radius turns width
    }
}