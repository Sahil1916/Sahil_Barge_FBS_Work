class SalesManager {
    int id;
    String name;
    double salary;
    double incentive;
    double target;
// Default Constructor
    public SalesManager() {
        this.id        = 0;
        this.name      = "Unknown";
        this.salary    = 0.0;
        this.incentive = 0.0;
        this.target    = 0.0;
    }
 
    // Parameterized Constructor
    public SalesManager(int id, String name, double salary, double incentive, double target) {
        this.id        = id;
        this.name      = name;
        this.salary    = salary;
        this.incentive = incentive;
        this.target    = target;
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
     double getIncentive() {
        return incentive;
    }
     void setIncentive(double incentive) {
        this.incentive = incentive;
    }
     double getTarget() {
        return target;
    }
     void setTarget(double target) {
        this.target = target;
    }
    
}

class SalesManagerTest {
    public static void main(String[] args) {
        SalesManager sm = new SalesManager();
        sm.setId(0);
        sm.setName("pratik ");
        sm.setSalary(50000);
        sm.setIncentive(4000);
        sm.setTarget(10);

        System.out.println("ID        : " + sm.getId());
        System.out.println("Name      : " + sm.getName());
        System.out.println("Salary    : " + sm.getSalary());
        System.out.println("Incentive : " + sm.getIncentive());
        System.out.println("Target    : " + sm.getTarget());


          // Default Constructor
        SalesManager sm1 = new SalesManager();
        System.out.println("ID        : " + sm1.getId());
        System.out.println("Name      : " + sm1.getName());
        System.out.println("Salary    : " + sm1.getSalary());
        System.out.println("Incentive : " + sm1.getIncentive());
        System.out.println("Target    : " + sm1.getTarget());
        System.out.println("HashCode  : " + sm1.hashCode());
 
        System.out.println();
 
        // Parameterized Constructor
        SalesManager sm2 = new SalesManager(501, "sahil barge", 70000.0, 10000.0, 500000.0);
        System.out.println("ID        : " + sm2.getId());
        System.out.println("Name      : " + sm2.getName());
        System.out.println("Salary    : " + sm2.getSalary());
        System.out.println("Incentive : " + sm2.getIncentive());
        System.out.println("Target    : " + sm2.getTarget());
    }
}