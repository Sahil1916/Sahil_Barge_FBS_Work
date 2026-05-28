package LibraryH;

// ==================== LIBRARY ITEM HIERARCHY (ADDITIONAL) ====================

class LibraryItem {
    protected String title;
    protected String author;
    protected int yearPublished;

    public LibraryItem(String title, String author, int yearPublished) {
        this.title = title;
        this.author = author;
        this.yearPublished = yearPublished;
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Issue #" + issueNumber + ", Frequency: " + frequency);
    }
}

// ==================== MAIN CLASS ====================

public class LibraryH {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("LIBRARY ITEM HIERARCHY DEMONSTRATION (ADDITIONAL)");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Book Details ---");
        Book book = new Book("The Alchemist", "Paulo Coelho", 1988, "978-0062502174", 208);
        book.displayInfo();
        
        System.out.println("\n--- Magazine Details ---");
        Magazine magazine = new Magazine("National Geographic", "Various", 2024, 482, "Monthly");
        magazine.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL LIBRARY ITEM TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}
