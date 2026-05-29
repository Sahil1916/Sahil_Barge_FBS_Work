class LibraryItem {
    protected String title;
    protected String author;
    protected int yearPublished;

    public LibraryItem(String title, String author, int yearPublished) {
        this.title = title;
        this.author = author;
        this.yearPublished = yearPublished;
    }

    public void borrow() {
        System.out.println("Borrowing a library item.");
    }

    public void displayInfo() {
        System.out.println("Title: " + title + ", Author: " + author + ", Year: " + yearPublished);
    }
}

class Book extends LibraryItem {
    protected String isbn;
    protected int pages;

    public Book(String title, String author, int yearPublished, String isbn, int pages) {
        super(title, author, yearPublished);
        this.isbn = isbn;
        this.pages = pages;
    }

    @Override
    public void borrow() {
        System.out.println("Borrowing book: '" + title + "' by " + author);
        System.out.println("   ISBN: " + isbn + ", " + pages + " pages. Due in 14 days.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("ISBN: " + isbn + ", Pages: " + pages);
    }
}

class Magazine extends LibraryItem {
    protected int issueNumber;
    protected String frequency;

    public Magazine(String title, String author, int yearPublished, int issueNumber, String frequency) {
        super(title, author, yearPublished);
        this.issueNumber = issueNumber;
        this.frequency = frequency;
    }

    @Override
    public void borrow() {
        System.out.println("Borrowing magazine: '" + title + "' - Issue #" + issueNumber);
        System.out.println("   Published " + frequency + ". Due in 7 days.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Issue #" + issueNumber + ", Frequency: " + frequency);
    }
}

public class LibrarySystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("LIBRARY SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        LibraryItem item;
        
        System.out.println("1. LibraryItem reference pointing to Book object:");
        item = new Book("Shriman Yogi", "Ranjit Desai", 1965, "978-8177661567", 450);
        System.out.print("   ");
        item.borrow();
        item.displayInfo();
        
        System.out.println("\n2. LibraryItem reference pointing to Magazine object:");
        item = new Magazine("Loksatta", "Various", 2024, 482, "Daily");
        System.out.print("   ");
        item.borrow();
        item.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}