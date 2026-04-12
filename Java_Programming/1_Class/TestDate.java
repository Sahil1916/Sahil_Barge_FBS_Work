class Date {
    int day;
    int month;
    int year;
    String dow;
}

class DateTest {
    public static void main(String[] args) {
        Date d = new Date();
        d.day   = 9;
        d.month = 4;
        d.year  = 2026;
        d.dow   = "Thursday";

        
        System.out.println("Day   : " + d.day);
        System.out.println("Month : " + d.month);
        System.out.println("Year  : " + d.year);
        System.out.println("DOW   : " + d.dow);
       
    }
}