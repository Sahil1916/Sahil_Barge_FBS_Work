public class Calculator {

     int add(int a, int b) {
        return a + b;
    }

     double add(double a, double b) {
        return a + b;
    }

     double add(int a, double b) {
        return a + b;
    }

     double add(double a, int b) {
        return a + b;
    }

     int subtract(int a, int b) {
        return a - b;
    }

     double subtract(double a, double b) {
        return a - b;
    }

     double subtract(int a, double b) {
        return a - b;
    }

     double subtract(double a, int b) {
        return a - b;
    }

     int multiply(int a, int b) {
        return a * b;
    }

     double multiply(double a, double b) {
        return a * b;
    }

     double multiply(int a, double b) {
        return a * b;
    }

     double multiply(double a, int b) {
        return a * b;
    }

     int divide(int a, int b) {
        if (b == 0) {
            System.out.println("Error: Division by zero!");
            return 0;
        }
        return a / b;
    }

     double divide(double a, double b) {
        if (b == 0) {
            System.out.println("Error: Division by zero!");
            return 0;
        }
        return a / b;
    }

     double divide(int a, double b) {
        if (b == 0) {
            System.out.println("Error: Division by zero!");
            return 0;
        }
        return a / b;
    }

     double divide(double a, int b) {
        if (b == 0) {
            System.out.println("Error: Division by zero!");
            return 0;
        }
        return a / b;
    }

    public static void main(String[] args) {
        Calculator calc = new Calculator();

        System.out.println("int + int       : " + calc.add(10, 5));
        System.out.println("double + double : " + calc.add(10.5, 5.5));
        System.out.println("int + double    : " + calc.add(10, 5.5));
        System.out.println("double + int    : " + calc.add(10.5, 5));

        System.out.println("int - int       : " + calc.subtract(10, 5));
        System.out.println("double - double : " + calc.subtract(10.5, 5.5));
        System.out.println("int - double    : " + calc.subtract(10, 5.5));
        System.out.println("double - int    : " + calc.subtract(10.5, 5));

        System.out.println("int * int       : " + calc.multiply(10, 5));
        System.out.println("double * double : " + calc.multiply(10.5, 5.5));
        System.out.println("int * double    : " + calc.multiply(10, 5.5));
        System.out.println("double * int    : " + calc.multiply(10.5, 5));

        System.out.println("int / int       : " + calc.divide(10, 5));
        System.out.println("double / double : " + calc.divide(10.5, 5.5));
        System.out.println("int / double    : " + calc.divide(10, 5.5));
        System.out.println("double / int    : " + calc.divide(10.5, 5));
    }
}