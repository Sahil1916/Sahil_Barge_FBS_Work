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

    public void brake() {
        System.out.println("Vehicle is braking using standard braking system.");
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
    public void brake() {
        System.out.println("Bike is braking using disc brakes on both wheels. Squeeze the brake lever!");
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
    public void brake() {
        System.out.println("Car is braking using ABS with hydraulic pressure!");
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
    public void brake() {
        System.out.println("Bus is braking using air brake system! Stopping heavy vehicle carefully.");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Passenger Capacity: " + passengerCapacity + ", Standing Capacity: " + standingCapacity);
    }
}

public class VehicleSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("VEHICLE SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Vehicle vehicle;
        
        System.out.println("1. Vehicle reference pointing to Bike object:");
        vehicle = new Bike("MH12AB1234", "Hunter 350", "Bajaj", 2, 250000, 1, 2, "Cruiser");
        System.out.print("   ");
        vehicle.brake();
        vehicle.displayInfo();
        
        System.out.println("\n2. Vehicle reference pointing to Car object:");
        vehicle = new Car("MH14CD5678", "City", "Honda", 4, 1500000, true, "Automatic", true);
        System.out.print("   ");
        vehicle.brake();
        vehicle.displayInfo();
        
        System.out.println("\n3. Vehicle reference pointing to Bus object:");
        vehicle = new Bus("MH43EF9012", "Starbus", "Ashok Leyland", 6, 3500000, 45, 20);
        System.out.print("   ");
        vehicle.brake();
        vehicle.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}