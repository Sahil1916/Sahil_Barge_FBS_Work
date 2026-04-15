// Custom Class 2 of 2
class Product {
    int productId;
    String productName;
    int quantity;
    double price;
    // Default Constructor
    public Product() {
        this.productId   = 0;
        this.productName = "Unknown";
        this.quantity    = 0;
        this.price       = 0.0;
    }
 
    // Parameterized Constructor
    public Product(int productId, String productName, int quantity, double price) {
        this.productId   = productId;
        this.productName = productName;
        this.quantity    = quantity;
        this.price       = price;
    }
 
    public int getProductId() {
        return productId;
    }
    public void setProductId(int productId) {
        this.productId = productId;
    }
    public String getProductName() {
        return productName;
    }
    public void setProductName(String productName) {
        this.productName = productName;
    }
    public int getQuantity() {
        return quantity;
    }
    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }
    public double getPrice() {
        return price;
    }
    public void setPrice(double price) {
        this.price = price;
    }

}

class ProductTest {
    public static void main(String[] args) {
        Product p = new Product();
       p.setProductId(02);
       p.setProductName("phone");
       p.setQuantity(100);
       p.setPrice(50000);

        System.out.println("Product ID   : " + p.getProductId());
        System.out.println("Product Name : " + p.getProductName());
        System.out.println("Quantity     : " + p.getQuantity());
        System.out.println("Price        : " + p.getPrice());

        // Default Constructor
        Product p1 = new Product();
        System.out.println("Product ID   : " + p1.getProductId());
        System.out.println("Product Name : " + p1.getProductName());
        System.out.println("Quantity     : " + p1.getQuantity());
        System.out.println("Price        : " + p1.getPrice());
 
        System.out.println();
 
        // Parameterized Constructor
        Product p2 = new Product(801, "Laptop", 10, 55000.0);
        System.out.println("Product ID   : " + p2.getProductId());
        System.out.println("Product Name : " + p2.getProductName());
        System.out.println("Quantity     : " + p2.getQuantity());
        System.out.println("Price        : " + p2.getPrice());
    
    }
}