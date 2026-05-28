package Shape;

// ==================== SHAPE HIERARCHY ====================

class Shape {
    protected double area;

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

    public void displayInfo() {
        System.out.println("Circle - Radius: " + radius);
        displayArea();
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

    public void displayInfo() {
        System.out.println("Triangle - Base: " + base + ", Height: " + height);
        displayArea();
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

    public void displayInfo() {
        System.out.println("Rectangle - Length: " + length + ", Breadth: " + breadth);
        displayArea();
    }
}

// ==================== MAIN CLASS ====================

public class ShapeT {
    public static void main(String[] args) {
        System.out.println("=".repeat(50));
        System.out.println("SHAPE HIERARCHY DEMONSTRATION");
        System.out.println("=".repeat(50));
        
        System.out.println("\n--- Circle Details ---");
        Circle circle = new Circle(7);
        circle.displayInfo();
        
        System.out.println("\n--- Triangle Details ---");
        Triangle triangle = new Triangle(10, 5);
        triangle.displayInfo();
        
        System.out.println("\n--- Rectangle Details ---");
        Rectangle rectangle = new Rectangle(8, 6);
        rectangle.displayInfo();
        
        System.out.println("\n" + "=".repeat(50));
        System.out.println("ALL SHAPE TYPES DEMONSTRATED SUCCESSFULLY!");
        System.out.println("=".repeat(50));
    }
}
