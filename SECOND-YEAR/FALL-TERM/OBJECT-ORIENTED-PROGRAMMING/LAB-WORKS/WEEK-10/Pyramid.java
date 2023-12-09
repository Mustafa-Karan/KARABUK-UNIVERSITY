public class Pyramid extends Shape3D {
    public Pyramid(int height, int depth, int width){
        super(height,width);
        this.depth=depth;
    }
    public double getVolume(){
        return ((double) 1 /3)*height*width*depth;
    }
    public double getArea(){
        double h1=Math.sqrt(Math.pow(((double)depth/2),2)+height*height);
        double h2=Math.sqrt(Math.pow(((double)width/2),2)+height*height);
        double rectangle1=h1*width/2;
        double rectangle2=h2*depth/2;
        return 2*rectangle1+2*rectangle2+depth*width;
    }
}
