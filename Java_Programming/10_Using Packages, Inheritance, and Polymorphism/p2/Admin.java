package p2;

import p1.Employee;

public class Admin extends Employee {

    private double allowance;

    public Admin(int id, String name, double salary, double allowance) {
        super(id, name, salary);
        this.allowance = allowance;
    }

    public double getAllowance() {
        return allowance;
    }

    public void setAllowance(double allowance) {
        this.allowance = allowance;
    }

    @Override
    public double calSal() {
        return salary + allowance;
    }

    @Override
    public String toString() {
        return "Admin [id=" + id +
               ", name=" + name +
               ", salary=" + salary +
               ", allowance=" + allowance +
               ", totalSalary=" + calSal() + "]";
    }
}