package ACC;


// ==================== ACCOUNT HIERARCHY  ====================

class Account {
    protected String accountNumber;
    protected String holderName;
    protected double balance;

    public Account(String accountNumber, String holderName, double balance) {
        this.accountNumber = accountNumber;
        this.holderName = holderName;
        this.balance = balance;
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Interest Rate: " + interestRate + "%, Withdrawal Limit: " + withdrawalLimitPerMonth + "/month");
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Overdraft Limit: $" + overdraftLimit + ", Transaction Fee: $" + transactionFee);
    }
}

// ==================== MAIN CLASS ====================

public class AccountHierarchy {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("ACCOUNT HIERARCHY DEMONSTRATION (ADDITIONAL)");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Savings Account Details ---");
        SavingsAccount savings = new SavingsAccount("SAV001", "John Doe", 50000, 4.5, 6);
        savings.displayInfo();
        
        System.out.println("\n--- Current Account Details ---");
        CurrentAccount current = new CurrentAccount("CUR001", "Jane Smith", 100000, 50000, 5.0);
        current.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL ACCOUNT TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}