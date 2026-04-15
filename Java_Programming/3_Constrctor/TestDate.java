class Date {
    int day;
    int month;
    int year;
    String dow;

    // Default Constructor
    public Date() {
        this.day   = 1;
        this.month = 1;
        this.year  = 2000;
        this.dow   = "Saturday";
    }
 
    // Parameterized Constructor
    public Date(int day, int month, int year, String dow) {
        this.day   = day;
        this.month = month;
        this.year  = year;
        this.dow   = dow;
    }
     int getDay() {
        return day;
    }
     void setDay(int day) {
        this.day = day;
    }
     int getMonth() {
        return month;
    }
     void setMonth(int month) {
        this.month = month;
    }
     int getYear() {
        return year;
    }
     void setYear(int year) {
        this.year = year;
    }
     String getDow() {
        return dow;
    }
     void setDow(String dow) {
        this.dow = dow;
    }


}

class DateTest {
    public static void main(String[] args) {
        Date d = new Date();
       d.setDay(8);
       d.setMonth(4);
       d.setYear(2026);
       d.setDow("wed");
        
        System.out.println("Day   : " + d.getDay());
        System.out.println("Month : " + d.getMonth());
        System.out.println("Year  : " + d.getYear());
        System.out.println("DOW   : " + d.getDow());
//default Constructor
        Date d1 = new Date();
        System.out.println("Day   : " + d1.getDay());
        System.out.println("Month : " + d1.getMonth());
        System.out.println("Year  : " + d1.getYear());
        System.out.println("DOW   : " + d1.getDow());
 
        System.out.println();
 
        // Parameterized Constructor
        Date d2 = new Date(9, 4, 2026, "Thursday");
        System.out.println("Day   : " + d2.getDay());
        System.out.println("Month : " + d2.getMonth());
        System.out.println("Year  : " + d2.getYear());
        System.out.println("DOW   : " + d2.getDow());
       
    }
}