class PlacedStudent {
    int frn;
    String studentName;
    double distanceCovered;
    String companyName;
    String designation;
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
    }
}