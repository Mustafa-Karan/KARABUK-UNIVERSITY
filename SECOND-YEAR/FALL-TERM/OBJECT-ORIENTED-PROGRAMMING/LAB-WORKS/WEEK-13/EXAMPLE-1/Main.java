import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
public class Main {
    public static void main(String [] args){
        int a,b;
        String Name;
        double Rating;
        Scanner scanner=new Scanner(System.in);
        ArrayList <Movie> aList=new ArrayList<Movie>();
        System.out.println("HOW MANY MOVIE WILL YOU ADD?:");
        b=scanner.nextInt();
        scanner.nextLine();
        for(int i=0;i<b;i++){
            System.out.println("ENTER NAME");
            Name=scanner.nextLine();
            System.out.println("ENTER YEAR");
            a=scanner.nextInt();
            System.out.println("ENTER RATE");
            Rating=scanner.nextDouble();
            scanner.nextLine();
            aList.add(new Movie(Name,a,Rating));
        }
        Collections.sort(aList);
        for(Movie m : aList){
            System.out.println(m);
        }
    }
}