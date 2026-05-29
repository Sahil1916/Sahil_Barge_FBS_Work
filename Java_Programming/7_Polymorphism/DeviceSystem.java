class ElectronicDevice {
    protected String deviceName;
    protected String brand;
    protected double price;

    public ElectronicDevice(String deviceName, String brand, double price) {
        this.deviceName = deviceName;
        this.brand = brand;
        this.price = price;
    }

    public void powerOn() {
        System.out.println("Device is powering on.");
    }

    public void displayInfo() {
        System.out.println("Device: " + deviceName + ", Brand: " + brand + ", Price: $" + price);
    }
}

class Smartphone extends ElectronicDevice {
    protected int cameraMegapixels;
    protected int batteryCapacityMah;

    public Smartphone(String deviceName, String brand, double price, int cameraMegapixels, int batteryCapacityMah) {
        super(deviceName, brand, price);
        this.cameraMegapixels = cameraMegapixels;
        this.batteryCapacityMah = batteryCapacityMah;
    }

    @Override
    public void powerOn() {
        System.out.println(deviceName + " is powering on with welcome animation!");
        System.out.println("   Camera: " + cameraMegapixels + "MP, Battery: " + batteryCapacityMah + "mAh");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Camera: " + cameraMegapixels + "MP, Battery: " + batteryCapacityMah + "mAh");
    }
}

class Laptop extends ElectronicDevice {
    protected String processor;
    protected int ramSizeGB;

    public Laptop(String deviceName, String brand, double price, String processor, int ramSizeGB) {
        super(deviceName, brand, price);
        this.processor = processor;
        this.ramSizeGB = ramSizeGB;
    }

    @Override
    public void powerOn() {
        System.out.println(deviceName + " is booting up with " + processor + " processor!");
        System.out.println("   RAM: " + ramSizeGB + "GB, Ready to work!");
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Processor: " + processor + ", RAM: " + ramSizeGB + "GB");
    }
}

public class DeviceSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("ELECTRONIC DEVICE SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        ElectronicDevice device;
        
        System.out.println("1. ElectronicDevice reference pointing to Smartphone object:");
        device = new Smartphone("iPhone 15 Pro", "Apple", 129999, 48, 3274);
        System.out.print("   ");
        device.powerOn();
        device.displayInfo();
        
        System.out.println("\n2. ElectronicDevice reference pointing to Laptop object:");
        device = new Laptop("ThinkPad X1", "Lenovo", 150000, "Intel Core i7", 16);
        System.out.print("   ");
        device.powerOn();
        device.displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}