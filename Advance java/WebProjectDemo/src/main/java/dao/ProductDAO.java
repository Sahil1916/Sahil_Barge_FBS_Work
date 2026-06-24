package dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import config.DButil;
import module.Product;

public class ProductDAO {

	public List<Product> getAllProducts() {

		List<Product> products = new ArrayList<>();

		String sql = "SELECT * FROM product";

		try {
			Connection conn = DButil.getConnection();

			PreparedStatement ps = conn.prepareStatement(sql);
			ResultSet rs = ps.executeQuery();

			while (rs.next()) {

				Product product = new Product();

				product.setId(rs.getInt("id"));
				product.setpName(rs.getString("pname"));
				product.setPrice(rs.getDouble("price"));
				product.setQuantity(rs.getInt("quantity"));
				product.setBrand(rs.getString("brand"));
				product.setImgUrl("imgUrl");
				products.add(product);
			}

		} catch (Exception e) {
			e.printStackTrace();
		}
		return products;
	}

}
