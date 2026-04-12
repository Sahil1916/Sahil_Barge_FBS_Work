class Student {
    int frn;
    String studentName;
    double distanceCovered;
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
    }
}