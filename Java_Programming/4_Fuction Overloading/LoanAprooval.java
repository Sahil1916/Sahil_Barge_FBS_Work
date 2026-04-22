class Student {
    int rollNo;
    String name;
    double percentage;

    public Student(int rollNo, String name, double percentage) {
        this.rollNo = rollNo;
        this.name = name;
        this.percentage = percentage;
    }

}

class Employee {

    int id;
    String name;
    double annualSalary;

    public Employee(int id, String name, double annualSalary) {
        this.id = id;
        this.name = name;
        this.annualSalary = annualSalary;
    }

}

class Bank {

    // Loan approval for Student
    void approveLoan(Student s) {
        if (s.percentage > 80) {
            System.out.println("Student: " + s.name);
            System.out.println("Loan Approved: ₹200000");
        } else if (s.percentage >= 60) {
            System.out.println("Student: " + s.name);
            System.out.println("Loan Approved: ₹100000");
        } else if (s.percentage > 40) {
            System.out.println("Student: " + s.name);
            System.out.println("Loan Approved: ₹50000");
        } else {
            System.out.println("Student: " + s.name);
            System.out.println("Loan Not Approved");
        }
    }

    // Loan approval for Employee (Overloaded Method)
    void approveLoan(Employee e) {
        if (e.annualSalary > 800000) {
            System.out.println("Employee: " + e.name);
            System.out.println("Loan Approved: ₹500000");
        } else if (e.annualSalary > 500000) {
            System.out.println("Employee: " + e.name);
            System.out.println("Loan Approved: ₹300000");
        } else {
            System.out.println("Employee: " + e.name);
            System.out.println("Loan Not Approved");
        }
    }
}

public class LoanAprooval {
    public static void main(String[] args) {

        Student s1 = new Student(101, "Rahul", 85);
        Student s2 = new Student(102, "Anita", 55);
        Student s3 = new Student(03, "pratik thorat", 40);
        Employee e1 = new Employee(201, "sahil", 900000);

        Bank b = new Bank();

        b.approveLoan(s1);
        b.approveLoan(s2);
        b.approveLoan(e1);
        b.approveLoan(s3);
    }
}
