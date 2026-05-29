class Shape {
    protected double area;

    public double calculateArea() {
        return 0.0;
    }

    public void displayArea() {
        System.out.println("Area: " + area);
    }
}

class Circle extends Shape {
    protected double radius;

    public Circle(double radius) {
        this.radius = radius;
        this.area = Math.PI * radius * radius;
    }

    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }

    public void displayInfo() {
        System.out.println("Circle - Radius: " + radius);
        System.out.println("Calculated Area: " + calculateArea());
    }
}

class Triangle extends Shape {
    protected double base;
    protected double height;

    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
        this.area = 0.5 * base * height;
    }

    @Override
    public double calculateArea() {
        return 0.5 * base * height;
    }

    public void displayInfo() {
        System.out.println("Triangle - Base: " + base + ", Height: " + height);
        System.out.println("Calculated Area: " + calculateArea());
    }
}

class Rectangle extends Shape {
    protected double length;
    protected double breadth;

    public Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
        this.area = length * breadth;
    }

    @Override
    public double calculateArea() {
        return length * breadth;
    }

    public void displayInfo() {
        System.out.println("Rectangle - Length: " + length + ", Breadth: " + breadth);
        System.out.println("Calculated Area: " + calculateArea());
    }
}

public class ShapeSystem {
    public static void main(String[] args) {
        System.out.println("=".repeat(60));
        System.out.println("SHAPE SYSTEM - POLYMORPHISM DEMONSTRATION");
        System.out.println("=".repeat(60));
        
        System.out.println("\n--- Using Superclass Reference to Point to Different Subclass Objects ---\n");
        
        Shape shape;
        
        System.out.println("1. Shape reference pointing to Circle object:");
        shape = new Circle(7);
        System.out.println("   Calling calculateArea()...");
        System.out.println("   Result: " + String.format("%.2f", shape.calculateArea()) + " sq units");
        ((Circle) shape).displayInfo();
        
        System.out.println("\n2. Shape reference pointing to Triangle object:");
        shape = new Triangle(10, 5);
        System.out.println("   Calling calculateArea()...");
        System.out.println("   Result: " + shape.calculateArea() + " sq units");
        ((Triangle) shape).displayInfo();
        
        System.out.println("\n3. Shape reference pointing to Rectangle object:");
        shape = new Rectangle(8, 6);
        System.out.println("   Calling calculateArea()...");
        System.out.println("   Result: " + shape.calculateArea() + " sq units");
        ((Rectangle) shape).displayInfo();
        
        System.out.println("\n" + "=".repeat(60));
        System.out.println("POLYMORPHISM DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(60));
    }
}