class Appliance {
    protected String brand;
    protected String modelName;
    protected double powerRating;

    public Appliance(String brand, String modelName, double powerRating) {
        this.brand = brand;
        this.modelName = modelName;
        this.powerRating = powerRating;
    }

    public void operate() {
        System.out.println("Operating appliance.");
    }

    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Model: " + modelName + ", Power: " + powerRating + "W");
    }
}

class WashingMachine extends Appliance {
    protected double loadCapacity;
    protected int spinSpeed;

    public WashingMachine(String brand, String modelName, double powerRating, double loadCapacity, int spinSpeed) {
        super(brand, modelName, powerRating);
        this.loadCapacity = loadCapacity;
        this.spinSpeed = spinSpeed;
    }

    @Override
    public void operate() {
        System.out.println(brand + " " + modelName + " washing machine is washing clothes!");
        System.out.println("   Load capacity: " + loadCapacity + "kg, Spin speed: " + spinSpeed + " RPM");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Load: " + loadCapacity + "kg, Spin Speed: " + spinSpeed + " RPM");
    }
}

class Refrigerator extends Appliance {
    protected double capacityLitres;
    protected boolean hasFreezer;

    public Refrigerator(String brand, String modelName, double powerRating, double capacityLitres, boolean hasFreezer) {
        super(brand, modelName, powerRating);
        this.capacityLitres = capacityLitres;
        this.hasFreezer = hasFreezer;
    }

    @Override
    public void operate() {
        System.out.println(brand + " " + modelName + " refrigerator is cooling!");
        System.out.println("   Capacity: " + capacityLitres + "L, Freezer: " + (hasFreezer ? "Yes" : "No"));
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Capacity: " + capacityLitres + "L, Freezer: " + (hasFreezer ? "Yes" : "No"));
    }
}

public class ApplianceSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("APPLIANCE SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Appliance appliance;
        
        System.out.println("1. Appliance reference pointing to WashingMachine object:");
        appliance = new WashingMachine("Whirlpool", "Ace Wash", 2000, 7.5, 1400);
        System.out.print("   ");
        appliance.operate();
        appliance.displayInfo();
        
        System.out.println("\n2. Appliance reference pointing to Refrigerator object:");
        appliance = new Refrigerator("Godrej", "Double Door", 250, 550, true);
        System.out.print("   ");
        appliance.operate();
        appliance.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}