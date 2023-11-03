import java.util.Scanner;
import java.util.InputMismatchException;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);//scanner class
        try {
            System.out.println("PLEASE ENTER A VALUE");
            int INnumber = sc.nextInt();
            numberclass Number = new numberclass();//number class object
            Number.num(INnumber);
        } catch (InputMismatchException e) {
            System.out.println("Invalid input. Please enter a valid number.");
        }
    }
}