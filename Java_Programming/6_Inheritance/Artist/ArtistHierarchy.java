package Artist;

// ==================== ARTIST HIERARCHY ====================

class Artist {
    protected String name;
    protected int age;

    public Artist(String name, int age) {
        this.name = name;
        this.age = age;
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Industry: " + filmIndustry + ", Movies: " + numberOfMovies);
    }
}

// ==================== MAIN CLASS ====================

public class ArtistHierarchy {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("ARTIST HIERARCHY DEMONSTRATION");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Painter Details ---");
        Painter painter = new Painter("Vincent van Gogh", 37, "Post-Impressionism", "Oil", 2100);
        painter.displayInfo();
        
        System.out.println("\n--- Musician Details ---");
        Musician musician = new Musician("Ed Sheeran", 33, "Guitar", "Pop", 6);
        musician.displayInfo();
        
        System.out.println("\n--- Actor Details ---");
        Actor actor = new Actor("Tom Hanks", 67, "Hollywood", 75);
        actor.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL ARTIST TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}
