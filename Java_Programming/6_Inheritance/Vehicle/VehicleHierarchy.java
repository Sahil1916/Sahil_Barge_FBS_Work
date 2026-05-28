package Vehicle;
// ==================== VEHICLE HIERARCHY ====================

class Vehicle {
    protected String vehicleNumber;
    protected String model;
    protected String companyName;
    protected int noOfWheels;
    protected double price;

    public Vehicle(String vehicleNumber, String model, String companyName, int noOfWheels, double price) {
        this.vehicleNumber = vehicleNumber;
        this.model = model;
        this.companyName = companyName;
        this.noOfWheels = noOfWheels;
        this.price = price;
    }

    public void displayInfo() {
        System.out.println("Vehicle No: " + vehicleNumber + ", Model: " + model + 
                         ", Company: " + companyName + ", Wheels: " + noOfWheels + 
                         ", Price: $" + price);
    }
}

class Bike extends Vehicle {
    protected int noOfStands;
    protected int noOfHelmets;
    protected String bikeCategory;

    public Bike(String vehicleNumber, String model, String companyName, int noOfWheels, double price,
                int noOfStands, int noOfHelmets, String bikeCategory) {
        super(vehicleNumber, model, companyName, noOfWheels, price);
        this.noOfStands = noOfStands;
        this.noOfHelmets = noOfHelmets;
        this.bikeCategory = bikeCategory;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Stands: " + noOfStands + ", Helmets: " + noOfHelmets + 
                         ", Category: " + bikeCategory);
    }
}

class Car extends Vehicle {
    protected boolean hasPowerSteering;
    protected String driveMode;
    protected boolean parkingAssistSensors;

    public Car(String vehicleNumber, String model, String companyName, int noOfWheels, double price,
               boolean hasPowerSteering, String driveMode, boolean parkingAssistSensors) {
        super(vehicleNumber, model, companyName, noOfWheels, price);
        this.hasPowerSteering = hasPowerSteering;
        this.driveMode = driveMode;
        this.parkingAssistSensors = parkingAssistSensors;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Power Steering: " + hasPowerSteering + ", Drive Mode: " + driveMode + 
                         ", Parking Sensors: " + parkingAssistSensors);
    }
}

class Bus extends Vehicle {
    protected int passengerCapacity;
    protected int standingCapacity;

    public Bus(String vehicleNumber, String model, String companyName, int noOfWheels, double price,
               int passengerCapacity, int standingCapacity) {
        super(vehicleNumber, model, companyName, noOfWheels, price);
        this.passengerCapacity = passengerCapacity;
        this.standingCapacity = standingCapacity;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Passenger Capacity: " + passengerCapacity + ", Standing Capacity: " + standingCapacity);
    }
}

// ==================== MAIN CLASS ====================

public class VehicleHierarchy {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("VEHICLE HIERARCHY DEMONSTRATION");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Bike Details ---");
        Bike bike = new Bike("MH12AB1234", "Hunter 350", "Royal Enfield", 2, 250000, 1, 2, "Cruiser");
        bike.displayInfo();
        
        System.out.println("\n--- Car Details ---");
        Car car = new Car("DL05CD5678", "City", "Honda", 4, 1500000, true, "Automatic", true);
        car.displayInfo();
        
        System.out.println("\n--- Bus Details ---");
        Bus bus = new Bus("KA01EF9012", "Starbus", "Ashok Leyland", 6, 3500000, 45, 20);
        bus.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL VEHICLE TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}