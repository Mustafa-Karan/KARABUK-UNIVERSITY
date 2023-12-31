import java.util.*;
import java.util.InputMismatchException;
public class main {
    public static void main(String[] args){
        int a;
        String name;
        double balance;
        boolean b=true;
        Scanner scanner=new Scanner(System.in);
        Collection <BankAccount> myAccounts=new ArrayList<>();
        while(b){
            try{
                if(myAccounts.isEmpty()) {
                    System.out.println("FIRST CREATE AN BANK ACCOUNT\nENTER ACCOUNT NUMBER TO BE CREATED:");
                    a=scanner.nextInt();
                    scanner.nextLine();
                    for (int i = 0; i < a; i++) {
                        System.out.println("ENTER NAME");
                        name=scanner.nextLine();
                        System.out.println("ENTER BALANCE");
                        balance=scanner.nextDouble();
                        scanner.nextLine();
                        myAccounts.add(new BankAccount(i+1,name,balance));
                    }
                }
                else{
                    System.out.println("PLEASE ENTER ANY NUMBER TO UPDATE BALANCE, TO EXIT ENTER 0");
                    a=scanner.nextInt();
                    if(a==0){
                        System.out.println("EXITING....");
                        break;
                    }
                    System.out.println("PLEASE ENTER ACCOUNT ID TO BE UPDATED:");
                    a=scanner.nextInt();
                    for (BankAccount accountid: myAccounts) {
                        if(accountid.getAccountNo()==a){
                            System.out.println(accountid.toString());
                            System.out.println("ENTER THE AMOUNT TO BE WITHDRAWN");
                            balance=scanner.nextDouble();
                            accountid.balanceChange(balance);
                            scanner.nextLine();
                            System.out.println("UPDATE SUCCESFULL...");
                            System.out.println(accountid.toString());
                            break;
                        }
                        else{
                            System.out.println("THERE IS NO AVAILABLE ACCOUNT RELATED TO THIS ID");
                        }
                    }
                }
            }
            catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter an integer.");
                scanner.nextLine();
            }
        }
        Iterator iterator= myAccounts.iterator();
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }
    }
}