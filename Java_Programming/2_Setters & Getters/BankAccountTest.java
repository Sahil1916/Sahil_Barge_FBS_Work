class BankAccount {
    long accountNumber;
    String holderName;
    double currentBalance;
    double interestRate;
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
    }
}