class Admin {
    int id;
    String name;
    double salary;
    double allowance;
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
    }
}