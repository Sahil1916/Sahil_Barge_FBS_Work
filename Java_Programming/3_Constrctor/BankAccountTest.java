class BankAccount {
    long accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;
    // Default Constructor
    public BankAccount() {
        this.accountNumber  = 0;
        this.holderName     = "Unknown";
        this.currentBalance = 0.0;
        this.interestRate   = 0.0;
    }
 
    // Parameterized Constructor
    public BankAccount(long accountNumber, String holderName,
                       double currentBalance, double interestRate) {
        this.accountNumber  = accountNumber;
        this.holderName     = holderName;
        this.currentBalance = currentBalance;
        this.interestRate   = interestRate;
    }
     long getAccountNumber() {
        return accountNumber;
    }
     void setAccountNumber(long accountNumber) {
        this.accountNumber = accountNumber;
    }
     String getHolderName() {
        return holderName;
    }
     void setHolderName(String holderName) {
        this.holderName = holderName;
    }
     double getCurrentBalance() {
        return currentBalance;
    }
     void setCurrentBalance(double currentBalance) {
        this.currentBalance = currentBalance;
    }
     double getInterestRate() {
        return interestRate;
    }
     void setInterestRate(double interestRate) {
        this.interestRate = interestRate;
    }


}

class BankAccountTest {
    public static void main(String[] args) {
        BankAccount ba = new BankAccount();
        ba.setAccountNumber(01210);
        ba.setHolderName("sahil barge");
        ba.setCurrentBalance(500000000);
        ba.setInterestRate(5);


        System.out.println("Account Number  : " +ba.getAccountNumber() );
        System.out.println("Holder Name     : " + ba.getHolderName());
        System.out.println("Current Balance : " + ba.getCurrentBalance());
        System.out.println("Interest Rate   : " + ba.getInterestRate() + "%");


        // Default Constructor
        BankAccount ba1 = new BankAccount();
        System.out.println("Account Number  : " + ba1.getAccountNumber());
        System.out.println("Holder Name     : " + ba1.getHolderName());
        System.out.println("Current Balance : " + ba1.getCurrentBalance());
        System.out.println("Interest Rate   : " + ba1.getInterestRate() + "%");
 
        System.out.println();
 
        // Parameterized Constructor
        BankAccount ba2 = new BankAccount(9876543210L, "Meena Iyer", 100000.0, 3.5);
        System.out.println("Account Number  : " + ba2.getAccountNumber());
        System.out.println("Holder Name     : " + ba2.getHolderName());
        System.out.println("Current Balance : " + ba2.getCurrentBalance());
        System.out.println("Interest Rate   : " + ba2.getInterestRate() + "%");
    }
}