class Player {
    protected String name;
    protected int age;
    protected String country;
    protected int matchesPlayed;
    protected int jerseyNumber;

    public Player(String name, int age, String country, int matchesPlayed, int jerseyNumber) {
        this.name = name;
        this.age = age;
        this.country = country;
        this.matchesPlayed = matchesPlayed;
        this.jerseyNumber = jerseyNumber;
    }

    public void play() {
        System.out.println("Player is playing sports.");
    }

    public void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age + ", Country: " + country + 
                         ", Matches: " + matchesPlayed + ", Jersey #" + jerseyNumber);
    }
}

class CricketPlayer extends Player {
    protected int totalRuns;
    protected int totalWickets;
    protected String battingStyle;
    protected String bowlingStyle;

    public CricketPlayer(String name, int age, String country, int matchesPlayed, int jerseyNumber,
                         int totalRuns, int totalWickets, String battingStyle, String bowlingStyle) {
        super(name, age, country, matchesPlayed, jerseyNumber);
        this.totalRuns = totalRuns;
        this.totalWickets = totalWickets;
        this.battingStyle = battingStyle;
        this.bowlingStyle = bowlingStyle;
    }

    @Override
    public void play() {
        System.out.println(name + " is playing cricket! " + battingStyle + " batsman and " + bowlingStyle + " bowler.");
        System.out.println("   Career: " + totalRuns + " runs and " + totalWickets + " wickets.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Runs: " + totalRuns + ", Wickets: " + totalWickets + 
                         ", Batting: " + battingStyle + ", Bowling: " + bowlingStyle);
    }
}

class FootballPlayer extends Player {
    protected int totalGoals;
    protected String playingPosition;

    public FootballPlayer(String name, int age, String country, int matchesPlayed, int jerseyNumber,
                          int totalGoals, String playingPosition) {
        super(name, age, country, matchesPlayed, jerseyNumber);
        this.totalGoals = totalGoals;
        this.playingPosition = playingPosition;
    }

    @Override
    public void play() {
        System.out.println(name + " is playing football as a " + playingPosition + "!");
        System.out.println("   Scored " + totalGoals + " career goals.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Goals: " + totalGoals + ", Position: " + playingPosition);
    }
}

public class PlayerSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("PLAYER SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Player player;
        
        System.out.println("1. Player reference pointing to CricketPlayer object:");
        player = new CricketPlayer("Ruturaj Gaikwad", 27, "India", 85, 31, 3500, 0, "Right-handed", "Right-arm offbreak");
        System.out.print("   ");
        player.play();
        player.displayInfo();
        
        System.out.println("\n2. Player reference pointing to FootballPlayer object:");
        player = new FootballPlayer("Rahul More", 25, "India", 45, 7, 28, "Striker");
        System.out.print("   ");
        player.play();
        player.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}