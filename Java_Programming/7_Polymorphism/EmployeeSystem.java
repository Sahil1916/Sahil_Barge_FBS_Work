class Employee {
    protected int id;
    protected String name;
    protected double salary;

    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public double calculateSalary() {
        return salary;
    }

    public void displayInfo() {
        System.out.println("ID: " + id + ", Name: " + name + ", Base Salary: $" + salary);
    }
}

class Admin extends Employee {
    protected double allowance;

    public Admin(int id, String name, double salary, double allowance) {
        super(id, name, salary);
        this.allowance = allowance;
    }

    @Override
    public double calculateSalary() {
        return salary + allowance;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Allowance: $" + allowance);
        System.out.println("Total Salary: $" + calculateSalary());
    }
}

class SalesManager extends Employee {
    protected double incentive;
    protected double target;

    public SalesManager(int id, String name, double salary, double incentive, double target) {
        super(id, name, salary);
        this.incentive = incentive;
        this.target = target;
    }

    @Override
    public double calculateSalary() {
        return salary + incentive;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Incentive: $" + incentive + ", Target: $" + target);
        System.out.println("Total Salary: $" + calculateSalary());
    }
}

class HR extends Employee {
    protected double commission;

    public HR(int id, String name, double salary, double commission) {
        super(id, name, salary);
        this.commission = commission;
    }

    @Override
    public double calculateSalary() {
        return salary + commission;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Commission: $" + commission);
        System.out.println("Total Salary: $" + calculateSalary());
    }
}

public class EmployeeSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("EMPLOYEE SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Employee emp;
        
        System.out.println("1. Employee reference pointing to Admin object:");
        emp = new Admin(101, "Aarti Deshmukh", 75000, 5000);
        System.out.println("   Calling calculateSalary()...");
        System.out.println("   Result: $" + emp.calculateSalary());
        emp.displayInfo();
        
        System.out.println("\n2. Employee reference pointing to SalesManager object:");
        emp = new SalesManager(102, "Rahul Jadhav", 80000, 10000, 200000);
        System.out.println("   Calling calculateSalary()...");
        System.out.println("   Result: $" + emp.calculateSalary());
        emp.displayInfo();
        
        System.out.println("\n3. Employee reference pointing to HR object:");
        emp = new HR(103, "Sneha Patil", 70000, 3000);
        System.out.println("   Calling calculateSalary()...");
        System.out.println("   Result: $" + emp.calculateSalary());
        emp.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}