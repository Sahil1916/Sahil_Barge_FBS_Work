class HR {
    int id;
    String name;
    double salary;
    double commission;
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
    }
}