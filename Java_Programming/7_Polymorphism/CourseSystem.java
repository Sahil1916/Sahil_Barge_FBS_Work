class Course {
    protected String courseName;
    protected String courseCode;
    protected int credits;

    public Course(String courseName, String courseCode, int credits) {
        this.courseName = courseName;
        this.courseCode = courseCode;
        this.credits = credits;
    }

    public void deliver() {
        System.out.println("Delivering course content.");
    }

    public void displayInfo() {
        System.out.println("Course: " + courseName + " (" + courseCode + "), Credits: " + credits);
    }
}

class OnlineCourse extends Course {
    protected String platform;
    protected int durationHours;

    public OnlineCourse(String courseName, String courseCode, int credits, String platform, int durationHours) {
        super(courseName, courseCode, credits);
        this.platform = platform;
        this.durationHours = durationHours;
    }

    @Override
    public void deliver() {
        System.out.println("Delivering '" + courseName + "' online via " + platform + " platform!");
        System.out.println("   Duration: " + durationHours + " hours of video content.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Platform: " + platform + ", Duration: " + durationHours + " hours");
    }
}

class LabCourse extends Course {
    protected int labHoursPerWeek;
    protected String labEquipment;

    public LabCourse(String courseName, String courseCode, int credits, int labHoursPerWeek, String labEquipment) {
        super(courseName, courseCode, credits);
        this.labHoursPerWeek = labHoursPerWeek;
        this.labEquipment = labEquipment;
    }

    @Override
    public void deliver() {
        System.out.println("Delivering '" + courseName + "' as a hands-on lab course!");
        System.out.println("   " + labHoursPerWeek + " lab hours per week using: " + labEquipment);
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Lab Hours/Week: " + labHoursPerWeek + ", Equipment: " + labEquipment);
    }
}

public class CourseSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("COURSE SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Course course;
        
        System.out.println("1. Course reference pointing to OnlineCourse object:");
        course = new OnlineCourse("Marathi Literature", "ML101", 4, "Coursera", 40);
        System.out.print("   ");
        course.deliver();
        course.displayInfo();
        
        System.out.println("\n2. Course reference pointing to LabCourse object:");
        course = new LabCourse("Electronics Lab", "EL201", 2, 3, "Oscilloscope, Multimeter");
        System.out.print("   ");
        course.deliver();
        course.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}