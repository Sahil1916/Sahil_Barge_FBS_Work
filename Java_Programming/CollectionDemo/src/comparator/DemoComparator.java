package comparator;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Employee{
	
	private int id ;
	private String name ;
	private double sal;
	public Employee(int id, String name, double sal) {
		super();
		this.id = id;
		this.name = name;
		this.sal = sal;
	}
	public Employee() {
		super();
		// TODO Auto-generated constructor stub
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public double getSal() {
		return sal;
	}
	public void setSal(double sal) {
		this.sal = sal;
	}
	@Override
	public String toString() {
	    return "id=" + id + ", name=" + name + ", sal=" + sal + "\n";
	}
	
	
}
// sort using  id 
class IdComparator implements Comparator{

	@Override
	public int compare(Object o1, Object o2) {
		Employee e1 = (Employee)o1;
		Employee e2 = (Employee)o2;
		
		return e2.getId()- e1.getId();
	}
	
}
//sort using salary
class  SalComparator implements Comparator{

	@Override
	public int compare(Object o1, Object o2) {
		Employee e1 = (Employee)o1;
		Employee e2 = (Employee)o2;
		return (int) (e1.getSal()-e2.getSal()); 
	}
	
}


public class DemoComparator {
   public static void main(String[] args) {
	   
	   ArrayList<Employee> emplist = new ArrayList<Employee>();
	   
	   emplist.add(new Employee(101,"a",50000));
	   emplist.add(new Employee(102,"b",40000));
	   emplist.add(new Employee(103,"c",10000));
	   emplist.add(new Employee(104,"d ",30000));
	   emplist.add(new Employee(105,"e",20000));
	   
	   for(Employee e :emplist) {
	   
	   System.out.println(e);
	   
	   }
	   
	   IdComparator idc= new IdComparator();
	   Collections.sort(emplist, idc);
	   
	   System.out.println(emplist);
	   
	   SalComparator sc = new SalComparator();
	   Collections.sort(emplist, sc);
	   
	   System.out.println(emplist); 
	
	   
}

}
