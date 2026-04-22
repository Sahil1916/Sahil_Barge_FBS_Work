class shape {
    double area;
}

class Triangle {
    double base;
    double height;
    double area;

    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

}

class Rectangle {

    double length;
    double breadth;
    double area;

    public Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

}

class Circle {

    double radius;
    double area;

    public Circle(double radius) {
        this.radius = radius;
    }

}

class AreaCalculation {

    // Overload for Triangle
    void calculateArea(Triangle t) {

        t.area = 0.5 * t.base * t.height;

        System.out.println("Triangle Area = " + t.area);
    }

    // Overload for Rectangle
    void calculateArea(Rectangle r) {
        r.area = r.length * r.breadth;
        System.out.println("Area is " + r.area);
    }

    // Overload for Circle
    void calculateArea(Circle c) {
        c.area = 3.14 * c.radius * c.radius;
        System.out.println("arae of circle is " + c.area);
    }
}

public class AreaCalculator {
    public static void main(String[] args) {

        Triangle t = new Triangle(6, 4);
        Rectangle r = new Rectangle(5, 3);
        Circle c = new Circle(7);

        AreaCalculation calc = new AreaCalculation();

        calc.calculateArea(t);
        calc.calculateArea(r);
        calc.calculateArea(c);

    }
}
