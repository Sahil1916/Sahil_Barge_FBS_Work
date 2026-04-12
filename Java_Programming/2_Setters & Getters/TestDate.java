class Date {
    int day;
    int month;
    int year;
    String dow;
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
       
    }
}