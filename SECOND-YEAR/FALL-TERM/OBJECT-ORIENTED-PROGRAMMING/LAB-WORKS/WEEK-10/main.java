import java.util.Scanner;
import java.util.InputMismatchException;
public class main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Boolean b= true;
        double radius,height,width;
        int radius1,depth,heightt,widthh,depthh;
        System.out.println("PLEASE MAKE A CHOICE TO EXIT ENTER -1");
        while(b){
            System.out.println("1=Circle"+'\n'+"2=Cone"+'\n'+"3=Cylinder"+'\n'+"4=Pyramid"+'\n'+"5=Rectangle"+'\n'+"6=Sphere"+'\n'+"7=Square");
            int choice=sc.nextInt();
            if(choice==-1){
                System.out.println("EXCITING.....");
                break;
            }
                try {
                    switch(choice) {
                        case 1:
                            System.out.println("ENTER RADIUS");
                            radius = sc.nextDouble();
                            sc.nextLine();
                            Shape2D circle = new Circle(radius);
                            System.out.println(circle.toString());
                            break;
                        case 2:
                            System.out.println("ENTER RADIUS");
                            radius = sc.nextDouble();
                            System.out.println("ENTER HEIGHT");
                            height = sc.nextDouble();
                            Shape3D cone = new Cone(height, radius);
                            System.out.println(cone.toString());
                            break;
                        case 3:
                            System.out.println("ENTER RADIUS");
                            radius = sc.nextDouble();
                            System.out.println("ENTER HEIGHT");
                            height = sc.nextDouble();
                            Shape3D cylinder = new Cylinder(height, radius);
                            System.out.println(cylinder.toString());
                            break;
                        case 4:
                            System.out.println("ENTER HEIGHT");
                            depth = sc.nextInt();
                            System.out.println("ENTER DEPTH");
                            heightt = sc.nextInt();
                            System.out.println("ENTER WIDTH");
                            widthh = sc.nextInt();
                            Shape3D pyramid = new Pyramid(depth, heightt, widthh);
                            System.out.println(pyramid.toString());
                            break;
                        case 5:
                            System.out.println("ENTER WIDTH");
                            width = sc.nextDouble();
                            System.out.println("ENTER HEIGHT");
                            height = sc.nextDouble();
                            Shape2D rectangle = new Rectangle(height, width);
                            System.out.println(rectangle.toString());
                            break;
                        case 6:
                            System.out.println("ENTER DEPTH");
                            depthh = sc.nextInt();
                            System.out.println("ENTER RADIUS");
                            radius = sc.nextInt();
                            Shape3D sphere = new Sphere(depthh, radius);
                            System.out.println(sphere.toString());
                            break;
                        case 7:
                            System.out.println("ENTER WIDTH");
                            width = sc.nextInt();
                            Shape2D square = new Square(width);
                            System.out.println(square.toString());
                            break;
                        default:
                            System.out.println("INVALID CHOICE !!!");
                    }
                }
                catch (InputMismatchException e) {
                    System.out.println("Invalid input. Please enter an integer.");
                    sc.nextLine();
                }
        }
    }
}
