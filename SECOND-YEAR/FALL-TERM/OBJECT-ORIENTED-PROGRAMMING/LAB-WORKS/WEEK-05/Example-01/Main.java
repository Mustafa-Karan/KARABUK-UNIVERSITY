import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);//scanner class
        double[] Area =new double[3];//to store radius
        int i=0;
        while(i<3){
            System.out.println("ENTER "+(i+1)+". RADIUS VALUE:");
            circle newcircle =new circle(scanner.nextInt());//object creation
            Area[i]=newcircle.computeArea();
            i++;
        }
        for(i=0;i<3;i++){
            System.out.println((i+1)+". AREA :"+Area[i]+"\n");
        }
    }
}