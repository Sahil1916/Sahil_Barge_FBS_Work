class PlacedStudent {
    int frn;
    String studentName;
    double distanceCovered;
    String companyName;
    String designation;
}

class PlacedStudentTest {
    public static void main(String[] args) {
        PlacedStudent ps = new PlacedStudent();
        ps.frn             = 202;
        ps.studentName     = "Priya Patil";
        ps.distanceCovered = 20.0;
        ps.companyName     = "TCS";
        ps.designation     = "Software Engineer";

        System.out.println("FRN              : " + ps.frn);
        System.out.println("Student Name     : " + ps.studentName);
        System.out.println("Distance Covered : " + ps.distanceCovered);
        System.out.println("Company Name     : " + ps.companyName);
        System.out.println("Designation      : " + ps.designation);
    }
}