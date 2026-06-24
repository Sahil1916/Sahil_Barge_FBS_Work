package service;

import java.util.List;

import dao.ProductDAO;
import module.Product;

public class ProductService {
	
	ProductDAO pd = new ProductDAO();
	
	public List<Product> getAllProduct(){
		return pd.getAllProducts();
	}

}
