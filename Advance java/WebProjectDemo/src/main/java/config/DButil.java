package config;

import java.io.InputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.util.Properties;

public class DButil {

	private static String url;
	private static String username;
	private static String password;

	static {
		try {
			Properties properties = new Properties();

			InputStream inputstream = DButil.class.getClassLoader().getResourceAsStream("application.properties");

			properties.load(inputstream);

			url = properties.getProperty("db.url");
			username = properties.getProperty("db.username");
			password = properties.getProperty("db.password");

		} catch (Exception e) {
			throw new RuntimeException(e);

		}
	}

	
	public static Connection getConnection() {
	    try {

	        Class.forName("com.mysql.cj.jdbc.Driver");

	        return DriverManager.getConnection(
	                url,
	                username,
	                password
	        );

	    } catch (Exception e) {
	        throw new RuntimeException(e);
	    }
	}
}
