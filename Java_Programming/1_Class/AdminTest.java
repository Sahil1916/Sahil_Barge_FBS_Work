class Admin {
    int id;
    String name;
    double salary;
    double allowance;
}

class AdminTest {
    public static void main(String[] args) {
        Admin a = new Admin();
        a.id        = 601;
        a.name      = "Sahil Barge";
        a.salary    = 40000.0;
        a.allowance = 3000.0;

        System.out.println("ID        : " + a.id);
        System.out.println("Name      : " + a.name);
        System.out.println("Salary    : " + a.salary);
        System.out.println("Allowance : " + a.allowance);
    }
}