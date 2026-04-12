class Employee {
    int id;
    String name;
    double salary;
}

class EmployeeTest {
    public static void main(String[] args) {
        Employee e = new Employee();
        e.id     = 301;
        e.name   = "Amit Kumar";
        e.salary = 45000.0;

        System.out.println("ID      : " + e.id);
        System.out.println("Name    : " + e.name);
        System.out.println("Salary  : " + e.salary);
    }
}