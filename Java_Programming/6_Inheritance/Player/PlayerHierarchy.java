package Player;

// ==================== PLAYER HIERARCHY ====================

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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Goals: " + totalGoals + ", Position: " + playingPosition);
    }
}

// ==================== MAIN CLASS ====================

public class PlayerHierarchy {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("PLAYER HIERARCHY DEMONSTRATION");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Cricket Player Details ---");
        CricketPlayer cricketer = new CricketPlayer("Virat Kohli", 35, "India", 280, 18, 26000, 5, "Right-handed", "Right-arm medium");
        cricketer.displayInfo();
        
        System.out.println("\n--- Football Player Details ---");
        FootballPlayer footballer = new FootballPlayer("Lionel Messi", 36, "Argentina", 180, 10, 821, "Forward");
        footballer.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL PLAYER TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}