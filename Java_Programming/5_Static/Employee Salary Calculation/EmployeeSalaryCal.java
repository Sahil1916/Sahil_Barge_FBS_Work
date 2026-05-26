class Employee {

    int empId;
    String empName;
    double basicSalary;

    // Common bonus rate for all employees
    static double bonusRate;

    // Static block
    static {
        bonusRate = 10.5;
    }

    // Constructor
    public Employee(int empId, String empName, double basicSalary) {
        this.empId = empId;
        this.empName = empName;
        this.basicSalary = basicSalary;
    }

    // Method to update bonus rate
    public static void updateBonusRate(double newRate) {
        bonusRate = newRate;
    }

    // Method to calculate total salary
    public double calculateSalary() {
        return basicSalary + (basicSalary * bonusRate / 100);
    }

    // Display employee details
    @Override
    public String toString() {
        return "Employee ID: " + empId +
               ", Employee Name: " + empName +
               ", Basic Salary: " + basicSalary;
    }

    // Main method
    public static void main(String[] args) {

        Employee e1 = new Employee(1, "Sahil", 50000);

        System.out.println(e1);
        System.out.println("Total Salary: " + e1.calculateSalary());

        // Updating bonus rate
        Employee.updateBonusRate(15);

        System.out.println("\nAfter Bonus Update:");
        System.out.println("Total Salary: " + e1.calculateSalary());
    }
}