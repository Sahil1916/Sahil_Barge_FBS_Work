class SalesManager {
    int id;
    String name;
    double salary;
    double incentive;
    double target;
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
    }
}