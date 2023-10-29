package week03;

import java.util.Scanner;

public class Account {
    private double balance;
    private String ownerName;
    private int pin;
    public Account(String ownerName, double balance, int pin){
        this.ownerName = ownerName;
        if(balance > 0.0)
            this.balance=balance;
        if(pin>999&&pin<10000)
            this.pin=pin;

    }
    public void add(double amount){
        if(amount>0.0){
            balance+=amount;
            System.out.println(amount + "$ hesabınıza eklendi.");
        }
    }
    public void withdraw(double amount){
        if (amount > balance) {
            System.out.println("Yeterli bakiye bulunmamaktadır.");
        }

        if (!checkPin()) {
            System.out.println("Hesabınız bloke edildi. Lütfen daha sonra tekrar deneyin.");
            return;
        }
        else {
            balance -= amount;
            System.out.println("Hesabınızdan " + amount + "$ para çekildi.");
        }
    }

    public boolean checkPin(){
        int tries = 3;
        System.out.print("Lütfen 4-haneli PIN giriniz: ");
        Scanner scanner = new Scanner(System.in);
        while (tries > 0) {
            int pw = scanner.nextInt();
            if (pw == pin)
                return true;
            else {
                tries--;
                System.out.print("Yanlış parola! " + tries + " deneme hakkınız kaldı.\nLütfen tekrar giriniz: ");
            }
        }
        return false;
    }

    public double getBalance() {
        return balance;
    }

    public String getOwnerName() {
        return ownerName;
    }

    public void setOwnerName(String ownerName) {
        this.ownerName = ownerName;
    }
}
