import java.util.Scanner;
public class main {
    public static void main (String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("2D ENTER 1. 3D ENTER 2");
        int choice=sc.nextInt();
        switch(choice){
            case 1:
                System.out.println("Are you want to enter X,Y ? please enter 1 To continue enter 0");
                choice=sc.nextInt();
                switch(choice){
                    case 0:
                        Point2D two=new Point2D();
                        System.out.println(two.toString());
                        break;
                    case 1:
                        System.out.println("ENTER X");
                        int x=sc.nextInt();
                        System.out.println("ENTER Y");
                        int y=sc.nextInt();
                        Point2D two1=new Point2D(x,y);
                        System.out.println(two1.toString());
                        break;
                    default:
                        System.out.println("INVALID ENTERING.");
                        System.out.println("EXCITING......");
                        break;
                }
            break;
            case 2:
                System.out.println("Are you want to enter Z ? please enter 1 To continue enter 0");
                choice=sc.nextInt();
                switch(choice){
                    case 0:
                        Point3D three=new Point3D();
                        System.out.println(three.toString());
                        break;
                    case 1:
                        System.out.println("ENTER X");
                        int x=sc.nextInt();
                        System.out.println("ENTER Y");
                        int y=sc.nextInt();
                        System.out.println("ENTER Z");
                        int z=sc.nextInt();
                        Point3D three1=new Point3D(x,y,z);
                        System.out.println(three1.toString());
                        break;
                    default:
                        System.out.println("INVALID ENTERING.");
                        System.out.println("EXCITING......");
                        break;
                }
        }
    }
}