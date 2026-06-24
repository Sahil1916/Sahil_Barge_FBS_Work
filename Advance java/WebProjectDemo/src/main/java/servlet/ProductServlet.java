package servlet;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import module.Product;
import service.ProductService;

@WebServlet("/product")
public class ProductServlet extends HttpServlet {
	
	ProductService productservice = new ProductService();	
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		List<Product>products = productservice.getAllProduct();
		
		PrintWriter out = resp.getWriter();
		
	for (Product p : products)	{
		
		out.println(p+" ");
	}
	}

}
