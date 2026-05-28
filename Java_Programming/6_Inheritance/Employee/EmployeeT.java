package Employee;
// ==================== EMPLOYEE HIERARCHY ====================

class Employee {
    protected int id;
    protected String name;
    protected double salary;

    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public void displayInfo() {
        System.out.println("ID: " + id + ", Name: " + name + ", Salary: $" + salary);
    }
}

class Admin extends Employee {
    protected double allowance;

    public Admin(int id, String name, double salary, double allowance) {
        super(id, name, salary);
        this.allowance = allowance;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Allowance: $" + allowance);
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Incentive: $" + incentive + ", Target: $" + target);
    }
}

class HR extends Employee {
    protected double commission;

    public HR(int id, String name, double salary, double commission) {
        super(id, name, salary);
        this.commission = commission;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Commission: $" + commission);
    }
}

// ==================== MAIN CLASS ====================

public class EmployeeT {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("EMPLOYEE HIERARCHY DEMONSTRATION");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Admin Details ---");
        Admin admin = new Admin(101, "Alice Johnson", 75000, 5000);
        admin.displayInfo();
        
        System.out.println("\n--- Sales Manager Details ---");
        SalesManager salesMgr = new SalesManager(102, "Bob Smith", 80000, 10000, 200000);
        salesMgr.displayInfo();
        
        System.out.println("\n--- HR Details ---");
        HR hr = new HR(103, "Carol Davis", 70000, 3000);
        hr.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL EMPLOYEE TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}