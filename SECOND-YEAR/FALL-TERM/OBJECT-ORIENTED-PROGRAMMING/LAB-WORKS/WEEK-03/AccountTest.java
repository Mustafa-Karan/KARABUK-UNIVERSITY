package week03;

import java.util.Scanner;

public class AccountTest {
    public static void main(String[] args) {
        Account account = new Account("Mustafa", 4000, 1111);

        System.out.println("Bakiye: " + account.getBalance());

        Scanner scanner = new Scanner(System.in);
        System.out.print("Yatırmak istediğiniz miktarı giriniz: ");
        int amount = scanner.nextInt();
        account.add(amount);

        System.out.println("Bakiye: " + account.getBalance());

        System.out.print("Çekilecek miktarı giriniz: ");
        amount = scanner.nextInt();
        account.withdraw(amount);

        System.out.println("Bakiye: " + account.getBalance());
    }
}
