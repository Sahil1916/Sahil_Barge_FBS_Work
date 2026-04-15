class HR {
    int id;
    String name;
    double salary;
    double commission;
    // Default Constructor
    public HR() {
        this.id         = 0;
        this.name       = "Unknown";
        this.salary     = 0.0;
        this.commission = 0.0;
    }
 
    // Parameterized Constructor
    public HR(int id, String name, double salary, double commission) {
        this.id         = id;
        this.name       = name;
        this.salary     = salary;
        this.commission = commission;
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
     double getCommission() {
        return commission;
    }
     void setCommission(double commission) {
        this.commission = commission;
    }
    
}

class HRTest {
    public static void main(String[] args) {
        HR hr = new HR();
       hr.setId(01);
       hr.setName("sahil barge");
       hr.setSalary(500000);
       hr.setCommission(5);

        System.out.println("ID         : " + hr.getId());
        System.out.println("Name       : " + hr.getName());
        System.out.println("Salary     : " + hr.getSalary());
        System.out.println("Commission : " + hr.getCommission());

         // Default Constructor
        HR hr1 = new HR();
        System.out.println("ID         : " + hr1.getId());
        System.out.println("Name       : " + hr1.getName());
        System.out.println("Salary     : " + hr1.getSalary());
        System.out.println("Commission : " + hr1.getCommission());
        System.out.println("HashCode   : " + hr1.hashCode());
 
        System.out.println();
 
        // Parameterized Constructor
        HR hr2 = new HR(401, "Sneha Desai", 55000.0, 5000.0);
        System.out.println("ID         : " + hr2.getId());
        System.out.println("Name       : " + hr2.getName());
        System.out.println("Salary     : " + hr2.getSalary());
        System.out.println("Commission : " + hr2.getCommission());
    }
}