package controller;

import DAO.EmployeeDao;
import Model.Employee;

public class EmployeeController {
	EmployeeDao ed = new EmployeeDao();

	public boolean addEmployee(Employee e) {

		return ed.addEmployee(e);
	}

	public Employee searchEmployeeById(int id) {
		return ed.getById(id);
	}

	public boolean updateEmployee(int id, double salary) {
		return ed.updateSalary(id, salary);
	}

	public boolean deleteEmployee(int id) {
		return ed.deleteEmployee(id);
	}

	public Employee[] displayAll() {
		return ed.getAllEmployee();
	}
}
