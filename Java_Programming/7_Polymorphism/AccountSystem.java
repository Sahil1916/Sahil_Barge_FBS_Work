class Account {
    protected String accountNumber;
    protected String holderName;
    protected double balance;

    public Account(String accountNumber, String holderName, double balance) {
        this.accountNumber = accountNumber;
        this.holderName = holderName;
        this.balance = balance;
    }

    public double calculateInterest() {
        return 0.0;
    }

    public void displayInfo() {
        System.out.println("Account: " + accountNumber + ", Holder: " + holderName + ", Balance: $" + balance);
    }
}

class SavingsAccount extends Account {
    protected double interestRate;
    protected int withdrawalLimitPerMonth;

    public SavingsAccount(String accountNumber, String holderName, double balance, double interestRate, int withdrawalLimitPerMonth) {
        super(accountNumber, holderName, balance);
        this.interestRate = interestRate;
        this.withdrawalLimitPerMonth = withdrawalLimitPerMonth;
    }

    @Override
    public double calculateInterest() {
        double yearlyInterest = balance * (interestRate / 100);
        return yearlyInterest;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Interest Rate: " + interestRate + "%, Withdrawal Limit: " + withdrawalLimitPerMonth + "/month");
        System.out.println("Yearly Interest: $" + calculateInterest());
    }
}

class CurrentAccount extends Account {
    protected double overdraftLimit;
    protected double transactionFee;

    public CurrentAccount(String accountNumber, String holderName, double balance, double overdraftLimit, double transactionFee) {
        super(accountNumber, holderName, balance);
        this.overdraftLimit = overdraftLimit;
        this.transactionFee = transactionFee;
    }

    @Override
    public double calculateInterest() {
        return 0.0;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Overdraft Limit: $" + overdraftLimit + ", Transaction Fee: $" + transactionFee);
        System.out.println("Yearly Interest: $" + calculateInterest() + " (No interest on current accounts)");
    }
}

public class AccountSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("ACCOUNT SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Account account;
        
        System.out.println("1. Account reference pointing to SavingsAccount object:");
        account = new SavingsAccount("SAV001", "Gauri Joshi", 50000, 4.5, 6);
        System.out.println("   Calling calculateInterest()...");
        System.out.println("   Result: $" + account.calculateInterest());
        account.displayInfo();
        
        System.out.println("\n2. Account reference pointing to CurrentAccount object:");
        account = new CurrentAccount("CUR001", "Siddharth Shinde", 100000, 50000, 5.0);
        System.out.println("   Calling calculateInterest()...");
        System.out.println("   Result: $" + account.calculateInterest());
        account.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}