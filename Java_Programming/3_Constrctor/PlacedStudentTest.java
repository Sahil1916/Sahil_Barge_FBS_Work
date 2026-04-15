class PlacedStudent {
    int frn;
    String studentName;
    double distanceCovered;
    String companyName;
    String designation;

     // Default Constructor
    public PlacedStudent() {
        this.frn             = 0;
        this.studentName     = "Unknown";
        this.distanceCovered = 0.0;
        this.companyName     = "Not Placed";
        this.designation     = "N/A";
    }
 
    // Parameterized Constructor
    public PlacedStudent(int frn, String studentName, double distanceCovered,
                         String companyName, String designation) {
        this.frn             = frn;
        this.studentName     = studentName;
        this.distanceCovered = distanceCovered;
        this.companyName     = companyName;
        this.designation     = designation;
    }
 
     int getFrn() {
        return frn;
    }
     void setFrn(int frn) {
        this.frn = frn;
    }
     String getStudentName() {
        return studentName;
    }
     void setStudentName(String studentName) {
        this.studentName = studentName;
    }
     double getDistanceCovered() {
        return distanceCovered;
    }
     void setDistanceCovered(double distanceCovered) {
        this.distanceCovered = distanceCovered;
    }
     String getCompanyName() {
        return companyName;
    }
     void setCompanyName(String companyName) {
        this.companyName = companyName;
    }
     String getDesignation() {
        return designation;
    }
     void setDesignation(String designation) {
        this.designation = designation;
    }

}

class PlacedStudentTest {
    public static void main(String[] args) {
        PlacedStudent ps = new PlacedStudent();
       ps.setFrn(010101);
       ps.setStudentName("sahil barge");
       ps.setDistanceCovered(150);
       ps.setCompanyName("cognizent");
       ps.setDesignation("java developer");

        System.out.println("FRN              : " + ps.getFrn());
        System.out.println("Student Name     : " + ps.getStudentName());
        System.out.println("Distance Covered : " + ps.getDistanceCovered());
        System.out.println("Company Name     : " + ps.getCompanyName());
        System.out.println("Designation      : " + ps.getDesignation());


         // Default Constructor
        PlacedStudent ps1 = new PlacedStudent();
        System.out.println("FRN              : " + ps1.getFrn());
        System.out.println("Student Name     : " + ps1.getStudentName());
        System.out.println("Distance Covered : " + ps1.getDistanceCovered());
        System.out.println("Company Name     : " + ps1.getCompanyName());
        System.out.println("Designation      : " + ps1.getDesignation());
        System.out.println("HashCode         : " + ps1.hashCode());
 
        System.out.println();
 
        // Parameterized Constructor
        PlacedStudent ps2 = new PlacedStudent(202, "Priya Patil", 20.0, "TCS", "Software Engineer");
        System.out.println("FRN              : " + ps2.getFrn());
        System.out.println("Student Name     : " + ps2.getStudentName());
        System.out.println("Distance Covered : " + ps2.getDistanceCovered());
        System.out.println("Company Name     : " + ps2.getCompanyName());
        System.out.println("Designation      : " + ps2.getDesignation());
    }
}