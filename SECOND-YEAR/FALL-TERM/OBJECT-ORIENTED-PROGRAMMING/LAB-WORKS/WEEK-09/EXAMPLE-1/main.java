import java.util.Scanner;
public class main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("1=CIRCLE 2=CYLINDER");
        switch(sc.nextInt()){
            case 1:

                System.out.println("Enter Radius: ");
                double x=sc.nextDouble();
                System.out.println("Enter Color: ");
                sc.nextLine();
                String y=sc.nextLine();

                circle circle1=new circle(x,y);//parent
                circle1.getArea();
                System.out.println(circle1.toString());
            break;
            case 2:
                System.out.println("Enter Radius: ");
                x=sc.nextDouble();
                System.out.println("Enter Color: ");
                sc.nextLine();
                y=sc.nextLine();
                System.out.println("Enter height: ");
                double z=sc.nextDouble();
                circle cylinder1=new Cylinder(z,x,y);//child
                System.out.println(cylinder1.toString());
            break;
            default:
                System.out.println("INVALID INPUT");
                System.out.println("EXITING...");
            break;
        }
    }
}