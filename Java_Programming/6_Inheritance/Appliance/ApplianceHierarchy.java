package Appliance;

// ==================== APPLIANCE HIERARCHY  ====================

class Appliance {
    protected String brand;
    protected String modelName;
    protected double powerRating;

    public Appliance(String brand, String modelName, double powerRating) {
        this.brand = brand;
        this.modelName = modelName;
        this.powerRating = powerRating;
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Capacity: " + capacityLitres + "L, Freezer: " + (hasFreezer ? "Yes" : "No"));
    }
}

// ==================== MAIN CLASS ====================

public class ApplianceHierarchy {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("APPLIANCE HIERARCHY DEMONSTRATION (ADDITIONAL)");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Washing Machine Details ---");
        WashingMachine washer = new WashingMachine("Samsung", "EcoBubble", 2000, 7.5, 1400);
        washer.displayInfo();
        
        System.out.println("\n--- Refrigerator Details ---");
        Refrigerator fridge = new Refrigerator("LG", "Double Door", 250, 550, true);
        fridge.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL APPLIANCE TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}