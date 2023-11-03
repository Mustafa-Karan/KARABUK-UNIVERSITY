import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        int i=0;
        Scanner scanner=new Scanner(System.in);//scanner class
        while(i<3) {
            try {
                System.out.println("PLEASE ENTER SALARY");
                int salary = scanner.nextInt();
                scanner.nextLine();//TO FIX THE SKIPPED LINE
                if (i < 0) {
                    i++;
                    WorkerClass.ascent();
                }
                if (salary < 0) {
                    i--;
                    WorkerClass.descent();//to descent private static counter I wrote a private function in the Worker Class
                    throw new Exception("Salary can't be less than zero");
                } else {
                    i++;
                    System.out.println("ENTER A NAME:");
                    String Name = scanner.nextLine();
                    WorkerClass w = new WorkerClass();
                    w.setName(Name);
                    w.setSalary(salary);
                    w.seeEveythinhg();//TO SEE EVERYTHING IN THE CLASS
                }
            } catch (Exception e) {
                System.out.println("ERROR: " + e.getMessage());
            }
        }
        System.out.println("NUMBER OF WORKER: ");
        WorkerClass.seecounter();
    }
}