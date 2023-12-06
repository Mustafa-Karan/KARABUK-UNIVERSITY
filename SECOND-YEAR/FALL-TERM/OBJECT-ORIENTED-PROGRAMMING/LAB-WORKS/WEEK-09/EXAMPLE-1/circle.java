public class circle {
        private double radius;
        private String color;
        private final static double pi=3.14;

        public circle() {
            this(1.0,"red");
        }
        public circle(double radius) {
            this(radius,"red");
        }
        public circle(double radius,String color) {
          this.radius=radius;
          this.color=color;
    }
    public double getRadius(){
            return radius;
    }
    public void setRadius(double radius){
            this.radius=radius;
    }
    public String getColor(){
        return color;
    }
    public void setColor(String color){
        this.color=color;
    }
    public String toString(){
            return "Radius: "+radius+" Color: "+color;
    }
    public double getArea(){
            return pi*radius*radius;
    }
}

