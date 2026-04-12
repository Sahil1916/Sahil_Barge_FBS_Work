class Book {
    int bookId;
    String title;
    String author;
    double price;
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
    }
}