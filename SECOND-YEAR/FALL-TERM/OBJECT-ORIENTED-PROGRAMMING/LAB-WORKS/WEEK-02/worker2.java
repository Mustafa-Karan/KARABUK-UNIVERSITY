import java.util.Scanner;

public class worker2 {
    String name;
    int socialSecurityNumber;
    float wage;
    int workingHours;

    public void displayInfo(){

        System.out.printf("Name: %s\n",name);
        System.out.printf("Social Security Number: %d\n",socialSecurityNumber);
    }

    public void displaySalary(){
        System.out.printf("Salary: %f",wage*workingHours);
    }
    public static void main(String[] args){

    worker2 w = new worker2();

    Scanner scanner = new Scanner(System.in); 

    System.out.println("Enter your name:");
        w.name = scanner.nextLine();

        System.out.println("Enter your social number:");
        w.socialSecurityNumber=scanner.nextInt();

        System.out.println("Enter your wage: ");
        w.wage=scanner.nextFloat();

        System.out.println("Enter your working hours: ");
        w.workingHours=scanner.nextInt();

    w.displayInfo();
    w.displaySalary();
    }

}
