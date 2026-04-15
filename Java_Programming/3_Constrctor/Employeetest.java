class Employee {
    int id;
    String name;
    double salary;

     // Default Constructor
    public Employee() {
        this.id     = 0;
        this.name   = "Unknown";
        this.salary = 0.0;
    }
 
    // Parameterized Constructor
    public Employee(int id, String name, double salary) {
        this.id     = id;
        this.name   = name;
        this.salary = salary;
    }

     int getId() {
        return id;
    }
     void setId(int id) {
        this.id = id;
    }
     String getName() {
        return name;
    }
     void setName(String name) {
        this.name = name;
    }
     double getSalary() {
        return salary;
    }
     void setSalary(double salary) {
        this.salary = salary;
    }
    
}

class EmployeeTest {
    public static void main(String[] args) {
        Employee e = new Employee();
        e.setId(01);
        e.setName("sahil barge");
        e.setSalary(500000);

        System.out.println("ID      : " + e.getId());
        System.out.println("Name    : " + e.getName());
        System.out.println("Salary  : " + e.getSalary());

         // Default Constructor
        Employee e1 = new Employee();
        System.out.println("ID      : " + e1.getId());
        System.out.println("Name    : " + e1.getName());
        System.out.println("Salary  : " + e1.getSalary());
 
        System.out.println();
 
        // Parameterized Constructor
        Employee e2 = new Employee(301, "Amit Kumar", 45000.0);
        System.out.println("ID      : " + e2.getId());
        System.out.println("Name    : " + e2.getName());
        System.out.println("Salary  : " + e2.getSalary());
    }
}