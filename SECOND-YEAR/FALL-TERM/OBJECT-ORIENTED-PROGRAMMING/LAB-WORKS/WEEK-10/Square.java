public class Square extends Shape2D {
    public Square(double width){
        super(width,width);
    }
       public double getArea(){
        return width*width;
       }
}