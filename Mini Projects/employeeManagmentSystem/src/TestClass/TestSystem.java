package TestClass;

import View.EmployeeView;
import controller.EmployeeController;

public class TestSystem {
public static void main(String[] args) {
	
	EmployeeController ec = new EmployeeController();
	EmployeeView view = new EmployeeView(ec);
	view.showOptions();
}
}
