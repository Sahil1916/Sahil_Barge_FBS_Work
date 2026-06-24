package module;

public class Product {
	
	private int id ;
	private String pName;
	private double price ;
	private int quantity;
	private  String brand ;
	private String imgUrl;
	public Product(int id, String pName, double price, int quantity, String brand,String imgUrl) {
		super();
		this.id = id;
		this.pName = pName;
		this.price = price;
		this.quantity = quantity;
		this.brand = brand;
		this.imgUrl = imgUrl;
		
	}
	public Product() {
		super();
		// TODO Auto-generated constructor stub
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getpName() {
		return pName;
	}
	public void setpName(String pName) {
		this.pName = pName;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(double price) {
		this.price = price;
	}
	public int getQuantity() {
		return quantity;
	}
	public void setQuantity(int quantity) {
		this.quantity = quantity;
	}
	public String getBrand() {
		return brand;
	}
	public void setBrand(String brand) {
		this.brand = brand;
	}
	@Override
	public String toString() {
		return "Product id=" + id + ", pName=" + pName + ", price=" + price + ", quantity=" + quantity + ", brand="
				+ brand ;
	}
	public String getImgUrl() {
		return imgUrl;
	}
	public void setImgUrl(String imgUrl) {
		this.imgUrl = imgUrl;
	}
	
	 
	

}
