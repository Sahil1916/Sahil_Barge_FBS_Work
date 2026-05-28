package Course;

// ==================== COURSE HIERARCHY  ====================

class Course {
    protected String courseName;
    protected String courseCode;
    protected int credits;

    public Course(String courseName, String courseCode, int credits) {
        this.courseName = courseName;
        this.courseCode = courseCode;
        this.credits = credits;
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Lab Hours/Week: " + labHoursPerWeek + ", Equipment: " + labEquipment);
    }
}

// ==================== MAIN CLASS ====================

public class CourseT {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("COURSE HIERARCHY DEMONSTRATION (ADDITIONAL)");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Online Course Details ---");
        OnlineCourse onlineCourse = new OnlineCourse("Java Programming", "CS101", 4, "Coursera", 40);
        onlineCourse.displayInfo();
        
        System.out.println("\n--- Lab Course Details ---");
        LabCourse labCourse = new LabCourse("Data Structures Lab", "CS201", 2, 3, "Workstations, Projector");
        labCourse.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL COURSE TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}