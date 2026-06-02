package p3;

import p1.Employee;
import p2.Admin;
import p2.HR;
import p2.SalesManager;

public class Test {

    public static void main(String[] args) {

        Employee emp[] = new Employee[3];

        emp[0] = new HR(101, "Amit", 50000, 5000);
        emp[1] = new SalesManager(102, "Priya", 60000, 7000, 100000);
        emp[2] = new Admin(103, "Rahul", 45000, 3000);

        System.out.println("Employee Details");
        System.out.println("-----------------------------");

        for (Employee e : emp) {
            System.out.println(e); // Runtime Polymorphism (toString)
            System.out.println("Calculated Salary : " + e.calSal());
            System.out.println();
        }
    }
}