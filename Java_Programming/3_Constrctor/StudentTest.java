class Student {
    int frn;
    String studentName;
    double distanceCovered;

     // Default Constructor
    public Student() {
        this.frn             = 0;
        this.studentName     = "Unknown";
        this.distanceCovered = 0.0;
    }
 
    // Parameterized Constructor
    public Student(int frn, String studentName, double distanceCovered) {
        this.frn             = frn;
        this.studentName     = studentName;
        this.distanceCovered = distanceCovered;
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
    

}

class StudentTest {
    public static void main(String[] args) {
        Student s = new Student();
        s.setFrn(01);
        s.setStudentName("sahil barge");
        s.setDistanceCovered(150);

        System.out.println("FRN              : " + s.getFrn());
        System.out.println("Student Name     : " + s.getStudentName());
        System.out.println("Distance Covered : " + s.getDistanceCovered());

        // Default Constructor
        Student s1 = new Student();
        System.out.println("FRN              : " + s1.getFrn());
        System.out.println("Student Name     : " + s1.getStudentName());
        System.out.println("Distance Covered : " + s1.getDistanceCovered());
 
        System.out.println();
 
        // Parameterized Constructor
        Student s2 = new Student(101, "Rahul Sharma", 15.5);
        System.out.println("FRN              : " + s2.getFrn());
        System.out.println("Student Name     : " + s2.getStudentName());
        System.out.println("Distance Covered : " + s2.getDistanceCovered());
    }
}