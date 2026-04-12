class Student {
    int frn;
    String studentName;
    double distanceCovered;
}

class StudentTest {
    public static void main(String[] args) {
        Student s = new Student();
        s.frn             = 101;
        s.studentName     = "Rahul Sharma";
        s.distanceCovered = 15.5;

        System.out.println("FRN              : " + s.frn);
        System.out.println("Student Name     : " + s.studentName);
        System.out.println("Distance Covered : " + s.distanceCovered);
    }
}