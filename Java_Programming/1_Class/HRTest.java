class HR {
    int id;
    String name;
    double salary;
    double commission;
}

class HRTest {
    public static void main(String[] args) {
        HR hr = new HR();
        hr.id         = 401;
        hr.name       = "Sneha Desai";
        hr.salary     = 55000.0;
        hr.commission = 5000.0;

        System.out.println("ID         : " + hr.id);
        System.out.println("Name       : " + hr.name);
        System.out.println("Salary     : " + hr.salary);
        System.out.println("Commission : " + hr.commission);
    }
}