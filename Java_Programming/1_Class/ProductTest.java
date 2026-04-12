// Custom Class 2 of 2
class Product {
    int productId;
    String productName;
    int quantity;
    double price;
}

class ProductTest {
    public static void main(String[] args) {
        Product p = new Product();
        p.productId   = 801;
        p.productName = "Laptop";
        p.quantity    = 10;
        p.price       = 55000.0;

        System.out.println("Product ID   : " + p.productId);
        System.out.println("Product Name : " + p.productName);
        System.out.println("Quantity     : " + p.quantity);
        System.out.println("Price        : " + p.price);
    }
}