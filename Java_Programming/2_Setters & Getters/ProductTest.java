// Custom Class 2 of 2
class Product {
    int productId;
    String productName;
    int quantity;
    double price;
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
    }
}