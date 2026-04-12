class SalesManager {
    int id;
    String name;
    double salary;
    double incentive;
    double target;
}

class SalesManagerTest {
    public static void main(String[] args) {
        SalesManager sm = new SalesManager();
        sm.id        = 501;
        sm.name      = "Vikram Joshi";
        sm.salary    = 70000.0;
        sm.incentive = 10000.0;
        sm.target    = 500000.0;

        System.out.println("ID        : " + sm.id);
        System.out.println("Name      : " + sm.name);
        System.out.println("Salary    : " + sm.salary);
        System.out.println("Incentive : " + sm.incentive);
        System.out.println("Target    : " + sm.target);
    }
}