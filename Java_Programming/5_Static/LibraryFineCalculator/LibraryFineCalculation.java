class LibraryFineCalculation {

    String User_name;
    int no_of_late_days;
    static double fine;
    static {
        fine = 5;
    }

    public LibraryFineCalculation(String user_name, int no_of_late_days) {
        User_name = user_name;
        this.no_of_late_days = no_of_late_days;
    }

    public String getUser_name() {
        return User_name;
    }

    public void setUser_name(String user_name) {
        User_name = user_name;
    }

    public int getNo_of_late_days() {
        return no_of_late_days;
    }

    public void setNo_of_late_days(int no_of_late_days) {
        this.no_of_late_days = no_of_late_days;
    }

    public static double getFine() {
        return fine;
    }

    public static void setFine(double fine) {
        LibraryFineCalculation.fine = fine;
    }

    double calculateFine() {
        return no_of_late_days * fine;

    }
    

    @Override
    public String toString() {
        return "LibraryFineCalculation [User_name=" + User_name + ", no_of_late_days=" + no_of_late_days
                + ", calculateFine()=" + calculateFine() + "]";
    }

    public static void main(String[] args) {

LibraryFineCalculation f1 = new LibraryFineCalculation("suyog jagatap", 5);

System.out.println(f1);
System.out.println("total fine is :"+f1.calculateFine());



    }

}