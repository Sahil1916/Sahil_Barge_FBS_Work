class Artist {
    protected String name;
    protected int age;

    public Artist(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void perform() {
        System.out.println("Artist is performing.");
    }

    public void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}

class Painter extends Artist {
    protected String paintingStyle;
    protected String mediumUsed;
    protected int numberOfPaintings;

    public Painter(String name, int age, String paintingStyle, String mediumUsed, int numberOfPaintings) {
        super(name, age);
        this.paintingStyle = paintingStyle;
        this.mediumUsed = mediumUsed;
        this.numberOfPaintings = numberOfPaintings;
    }

    @Override
    public void perform() {
        System.out.println(name + " is painting a masterpiece using " + mediumUsed + "!");
        System.out.println("   Style: " + paintingStyle + ". Created " + numberOfPaintings + " paintings.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Style: " + paintingStyle + ", Medium: " + mediumUsed + 
                         ", Paintings: " + numberOfPaintings);
    }
}

class Musician extends Artist {
    protected String instrument;
    protected String musicGenre;
    protected int numberOfAlbums;

    public Musician(String name, int age, String instrument, String musicGenre, int numberOfAlbums) {
        super(name, age);
        this.instrument = instrument;
        this.musicGenre = musicGenre;
        this.numberOfAlbums = numberOfAlbums;
    }

    @Override
    public void perform() {
        System.out.println(name + " is performing " + musicGenre + " music on the " + instrument + "!");
        System.out.println("   Released " + numberOfAlbums + " albums.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Instrument: " + instrument + ", Genre: " + musicGenre + 
                         ", Albums: " + numberOfAlbums);
    }
}

class Actor extends Artist {
    protected String filmIndustry;
    protected int numberOfMovies;

    public Actor(String name, int age, String filmIndustry, int numberOfMovies) {
        super(name, age);
        this.filmIndustry = filmIndustry;
        this.numberOfMovies = numberOfMovies;
    }

    @Override
    public void perform() {
        System.out.println(name + " is acting in " + filmIndustry + " films!");
        System.out.println("   Starred in " + numberOfMovies + " movies.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Industry: " + filmIndustry + ", Movies: " + numberOfMovies);
    }
}

public class ArtistSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("ARTIST SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Artist artist;
        
        System.out.println("1. Artist reference pointing to Painter object:");
        artist = new Painter("Raja Ravi Varma", 68, "Realism", "Oil", 120);
        System.out.print("   ");
        artist.perform();
        artist.displayInfo();
        
        System.out.println("\n2. Artist reference pointing to Musician object:");
        artist = new Musician("Ajay-Atul", 48, "Keyboard", "Folk", 15);
        System.out.print("   ");
        artist.perform();
        artist.displayInfo();
        
        System.out.println("\n3. Artist reference pointing to Actor object:");
        artist = new Actor("Nana Patekar", 73, "Marathi & Hindi", 85);
        System.out.print("   ");
        artist.perform();
        artist.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}