public class BankAccount {
    private int accountNo;
    private String holderName;
    private double balance;
    BankAccount(int accountNo, String holderName,double balance){
        this.accountNo=accountNo;
        this.holderName=holderName;
        this.balance=balance;
    }
    public void balanceChange(double amount){
        this.balance=balance-amount;
    }
    public int getAccountNo(){
        return accountNo;
    }
    public String toString(){
        return "Account Id:"+accountNo+'\n'+"Holder Name:"+holderName+'\n'+"Balance:"+balance;
    }
}