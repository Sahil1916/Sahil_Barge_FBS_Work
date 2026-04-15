class Admin {
    int id;
    String name;
    double salary;
    double allowance;

     // Default Constructor
    public Admin() {
        this.id        = 0;
        this.name      = "Unknown";
        this.salary    = 0.0;
        this.allowance = 0.0;
    }
 
    // Parameterized Constructor
    public Admin(int id, String name, double salary, double allowance) {
        this.id        = id;
        this.name      = name;
        this.salary    = salary;
        this.allowance = allowance;
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
     double getAllowance() {
        return allowance;
    }
     void setAllowance(double allowance) {
        this.allowance = allowance;
    }
      
    
    
}

class AdminTest {
    public static void main(String[] args) {
        Admin a = new Admin();
        a.setId(1);
        a.setName("sahil barge ");
        a.setSalary(400000);    
        a.setAllowance(4000); 

        System.out.println("ID        : " + a.getId());
        System.out.println("Name      : " + a.getName());
        System.out.println("Salary    : " + a.getSalary());
        System.out.println("Allowance : " + a.getAllowance());

        // Default Constructor
        Admin a1 = new Admin();
        System.out.println("ID        : " + a1.getId());
        System.out.println("Name      : " + a1.getName());
        System.out.println("Salary    : " + a1.getSalary());
        System.out.println("Allowance : " + a1.getAllowance());
 
        System.out.println();
 
        // Parameterized Constructor
        Admin a2 = new Admin(601, "Rohini Kulkarni", 40000.0, 3000.0);
        System.out.println("ID        : " + a2.getId());
        System.out.println("Name      : " + a2.getName());
        System.out.println("Salary    : " + a2.getSalary());
        System.out.println("Allowance : " + a2.getAllowance());
    }
}