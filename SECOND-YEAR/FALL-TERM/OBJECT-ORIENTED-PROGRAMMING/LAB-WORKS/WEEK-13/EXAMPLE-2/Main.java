import java.util.*;
import java.util.InputMismatchException;
public class Main {
    public static void main(String [] args){
        boolean b=true;
        String name;
        double rating;
        int choice,choice1,year,elements=0;
        Scanner scanner=new Scanner(System.in);
        ArrayList <Movie> aList=new ArrayList<Movie>();
        while(b){
            try{
                System.out.println("TO ADD AN ELEMENT ENTER 1");
                System.out.println("TO ORDER BY NAME PLEASE ENTER 2");
                System.out.println("TO ORDER BY RATINGS PLEASE ENTER 3");
                System.out.println("TO EXIT PLEASE ENTER 0");
                choice=scanner.nextInt();
                scanner.nextLine();
                switch(choice){
                    case 0:
                        System.out.println("EXITING...");
                        b=false;
                        break;
                    case 1:
                        if(aList.isEmpty()==true){
                            System.out.println("LIST IS EMPTY ARE YOU WANT TO CREATE A LIST ENTER 1 TO EXIT ENTER 0");
                            choice1=scanner.nextInt();
                            if(choice1==1);
                            else if(choice1==0){
                                b=false;
                                break;
                            }
                            scanner.nextLine();
                            System.out.println("HOW MANY ELEMENTS WILL YOU ADD:");
                            choice1=scanner.nextInt();
                            elements=elements+choice1;
                            scanner.nextLine();
                            for(int i=0;i<choice1;i++){
                                System.out.println(i+1+" ELEMENT");
                                System.out.println("ENTER NAME");
                                name=scanner.nextLine();
                                System.out.println("ENTER YEAR");
                                year=scanner.nextInt();
                                scanner.nextLine();
                                System.out.println("ENTER RATING");
                                rating=scanner.nextDouble();
                                scanner.nextLine();
                                aList.add(new Movie(name,year,rating));
                            }
                        }
                        else{
                            System.out.println("THE LIST IS NOT EMPTY YOU CAN JUST ADD ELEMENTS,");
                            System.out.println("DO YOU WANT TO ADD ENTER 1 TO EXIT ENTER 0:");
                            choice1=scanner.nextInt();
                            scanner.nextLine();
                            if(choice1==1){
                                System.out.println("HOW MANY ELEMENTS WILL YOU ADD:");
                                choice1=scanner.nextInt();
                                scanner.nextLine();
                                for(int i=elements;i<elements+choice1;i++){
                                    System.out.println(i+1+" ELEMENT");
                                    System.out.println("ENTER NAME");
                                    name=scanner.nextLine();
                                    System.out.println("ENTER YEAR");
                                    year=scanner.nextInt();
                                    scanner.nextLine();
                                    System.out.println("ENTER RATING");
                                    rating=scanner.nextDouble();
                                    scanner.nextLine();
                                    aList.add(new Movie(name,year,rating));
                                }
                                elements=elements+choice1;
                            }
                            else if (choice==0) {
                                b=false;
                                break;
                            }
                        }
                        break;
                    case 2:
                        NameCompare nameCompare=new NameCompare();
                        Collections.sort(aList,nameCompare);
                        for(Movie movie: aList){
                            System.out.println(movie);
                        }
                        break;
                    case 3:
                        RatingCompare ratingCompare=new RatingCompare();
                        Collections.sort(aList,ratingCompare);
                        for(Movie movie: aList){
                            System.out.println(movie);
                        }
                        break;
                    default:
                        System.out.println("INVALID CHOICE");
                        break;
                }

            }
            catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter an integer.");
                scanner.nextLine();
            }
        }
    }
}