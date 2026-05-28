package device;

// ==================== ELECTRONIC DEVICE HIERARCHY  ====================

class ElectronicDevice {
    protected String deviceName;
    protected String brand;
    protected double price;

    public ElectronicDevice(String deviceName, String brand, double price) {
        this.deviceName = deviceName;
        this.brand = brand;
        this.price = price;
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
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Processor: " + processor + ", RAM: " + ramSizeGB + "GB");
    }
}

// ==================== MAIN CLASS ====================

public class DeviceHierarchy {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("ELECTRONIC DEVICE HIERARCHY DEMONSTRATION (ADDITIONAL)");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Smartphone Details ---");
        Smartphone phone = new Smartphone("iPhone 15 Pro", "Apple", 129999, 48, 3274);
        phone.displayInfo();
        
        System.out.println("\n--- Laptop Details ---");
        Laptop laptop = new Laptop("ThinkPad X1", "Lenovo", 150000, "Intel Core i7", 16);
        laptop.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL ELECTRONIC DEVICE TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}