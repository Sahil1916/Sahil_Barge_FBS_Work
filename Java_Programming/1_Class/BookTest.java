

class Book {
    int bookId;
    String title;
    String author;
    double price;
}

class BookTest {
    public static void main(String[] args) {
        Book b = new Book();
        b.bookId = 701;
        b.title  = "Java Programming";
        b.author = "James Gosling";
        b.price  = 499.0;

        System.out.println("Book ID : " + b.bookId);
        System.out.println("Title   : " + b.title);
        System.out.println("Author  : " + b.author);
        System.out.println("Price   : " + b.price);
    }
}