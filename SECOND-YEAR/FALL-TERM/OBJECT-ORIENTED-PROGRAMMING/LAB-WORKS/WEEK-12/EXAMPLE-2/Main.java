import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        boolean b = true;
        int choice, i;
        String s;
        Scanner scanner = new Scanner(System.in);
        ArrayList<Strings> aList = null; //IF I CREATE AN ARRAYLIST INSIDE CASE 1,
        while (b) {                      //I RECEIVE AN ERROR IN CASE 3. THEREFORE,
            try{                         //I INITIALLY ASSIGN NULL TO IT AND UPDATE IT IN CASE 1,
                System.out.println("TO ADD ELEMENT ENTER 1");// AND THIS FIXES THE ERROR.
                System.out.println("TO SWITCH THE ELEMENTS ENTER 2");
                System.out.println("TO PRINT THE ELEMENTS ENTER 3");
                System.out.println("TO EXIT ENTER 0");
                choice = scanner.nextInt();
                scanner.nextLine();
                switch (choice) {
                    case 0:
                        b = false;
                        break;
                    case 1:
                        aList = new ArrayList<>();
                        try {
                            System.out.println("HOW MANY ELEMENTS WILL YOU ADD:");
                            choice = scanner.nextInt();
                            scanner.nextLine();
                            for (i = 0; i < choice; i++) {
                                System.out.println("ENTER " + (i + 1) + ". STRING");
                                s = scanner.nextLine();
                                aList.add(new Strings(s));
                            }
                        } catch (InputMismatchException e) {
                            System.out.println("Invalid input. Please enter an integer.");
                            scanner.nextLine();
                        }
                        break;
                    case 2:
                        object object = new object();
                        object.switchPairs(aList);
                        break;
                    case 3:
                        if(aList!=null && !aList.isEmpty()){
                            for (Strings a : aList) {
                                System.out.println(a.getStrings());
                            }
                        }
                        else {
                            System.out.println("List is empty or not initialized.");
                        }
                        break;
                    default:
                        System.out.println("INVALID CHOICE TRY AGAIN...");
                        break;
                }

            }catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter an integer.");
                scanner.nextLine();
            }
        }
    }
}