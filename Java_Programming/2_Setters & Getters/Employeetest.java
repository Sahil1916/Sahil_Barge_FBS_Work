class Employee {
    int id;
    String name;
    double salary;
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
    }
}