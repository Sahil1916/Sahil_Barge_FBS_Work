class BankAccount {
    long accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;
}

class BankAccountTest {
    public static void main(String[] args) {
        BankAccount ba = new BankAccount();
        ba.accountNumber = 9876543210L;
        ba.holderName    = "Sahil Barge";
        ba.currentBalance = 100000.0;
        ba.interestRate   = 3.5;

        System.out.println("Account Number  : " + ba.accountNumber);
        System.out.println("Holder Name     : " + ba.holderName);
        System.out.println("Current Balance : " + ba.currentBalance);
        System.out.println("Interest Rate   : " + ba.interestRate + "%");
    }
}