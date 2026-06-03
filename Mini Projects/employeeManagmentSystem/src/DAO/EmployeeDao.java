package DAO;

import java.util.Iterator;

import Model.Admin;
import Model.Employee;
import Model.HR;
import Model.SalesManager;

public class EmployeeDao {

	static Employee[] empArr;
	static int empCount;
	static {

		empArr = new Employee[10];
		empCount = 0;

		empArr[empCount++] = new HR(101, "Ranjit", 50000, 5000);
		empArr[empCount++] = new HR(102, "Amit", 48000, 4500);
		empArr[empCount++] = new HR(103, "Sneha", 47000, 4000);

		empArr[empCount++] = new SalesManager(201, "Karan", 60000, 12, 8000);
		empArr[empCount++] = new SalesManager(202, "Meena", 58000, 15, 7500);
		empArr[empCount++] = new SalesManager(203, "Rohit", 62000, 10, 9000);

		empArr[empCount++] = new Admin(301, "Pragati", 70000, 10000);
		empArr[empCount++] = new Admin(302, "Isha", 68000, 9500);
		empArr[empCount++] = new Admin(303, "Pooja", 72000, 11000);
		empArr[empCount++] = new Admin(304, "Shubham", 75000, 12000);

	}

	public boolean addEmployee(Employee e) {

		if (empCount < empArr.length) {

			empArr[empCount++] = e;
			return true;
		}

		return false;

	}
	
	public Employee getById(int id) {
		
		for(int i = 0; i<empCount;i++) {
			
			if(empArr[i].getId()==id) {
				return empArr[i];
				
			}
		}
		return null;
	}
	
	public boolean updateSalary(int id,double salary) {
		
		for(int i = 0; i<empCount;i++) {
			
			if(empArr[i].getId()==id) {
				
				empArr[i].setSalary(salary);
				return true;
			}
		}
		return  false;
	}
	
	public boolean deleteEmployee(int id) {
		
		for(int i =0; i<empCount;i++) {
			
			if(empArr[i].getId()==id) {
				
				for(int j = i;j<empCount-1;j++) {
					empArr[j]= empArr[j+1];
					
				}
				empArr[empCount-1]=null;
				empCount--;
				
				return true;
			}
		}
		return false;
	}
	
	public Employee[] getAllEmployee() {
		
		Employee[] result = new Employee[empCount];
		
		for(int i = 0;i<empCount;i++) {
			result[i]= empArr[i];
		}
		return result;
	}

}
