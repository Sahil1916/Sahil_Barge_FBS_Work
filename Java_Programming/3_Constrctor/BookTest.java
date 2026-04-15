class Book {
    int bookId;
    String title;
    String author;
    double price;

    // Default Constructor
    public Book() {
        this.bookId = 0;
        this.title  = "Unknown";
        this.author = "Unknown";
        this.price  = 0.0;
    }
 
    // Parameterized Constructor
    public Book(int bookId, String title, String author, double price) {
        this.bookId = bookId;
        this.title  = title;
        this.author = author;
        this.price  = price;
    }
     int getBookId() {
        return bookId;
    }
     void setBookId(int bookId) {
        this.bookId = bookId;
    }
     String getTitle() {
        return title;
    }
     void setTitle(String title) {
        this.title = title;
    }
     String getAuthor() {
        return author;
    }
     void setAuthor(String author) {
        this.author = author;
    }
     double getPrice() {
        return price;
    }
     void setPrice(double price) {
        this.price = price;
    }
    
}

class BookTest {
    public static void main(String[] args) {
        Book b = new Book();
        b.setBookId(01);
        b.setTitle("java");
        b.setAuthor("james bhaiya");
        b.setPrice(500);

        System.out.println("Book ID : " + b.getBookId());
        System.out.println("Title   : " + b.getTitle());
        System.out.println("Author  : " + b.getAuthor());
        System.out.println("Price   : " + b.getPrice());

         // Default Constructor
        Book b1 = new Book();
        System.out.println("Book ID : " + b1.getBookId());
        System.out.println("Title   : " + b1.getTitle());
        System.out.println("Author  : " + b1.getAuthor());
        System.out.println("Price   : " + b1.getPrice());
 
        System.out.println();
 
        // Parameterized Constructor
        Book b2 = new Book(701, "Java Programming", "James Gosling", 499.0);
        System.out.println("Book ID : " + b2.getBookId());
        System.out.println("Title   : " + b2.getTitle());
        System.out.println("Author  : " + b2.getAuthor());
        System.out.println("Price   : " + b2.getPrice());
    }
}