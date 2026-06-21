package hashset;

import java.util.HashSet;


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
	
	@Override
	public boolean equals(Object obj) {
		
		//System.out.println("inside the equals ");
		
		Employee e1 = (Employee)obj;
		if(this.getId()==e1.getId())
		return  true;
		else
			return false;
	}
	
	@Override
	public int hashCode() {
		//System.out.println("inside the hashcode ");
		return this.getId();
	}
	
}
public class DemoHashset {
	public static void main(String[] args) {
		
		
		HashSet<Employee> empset = new HashSet<Employee>();
		
		
		  empset.add(new Employee(101,"a",50000));
		  empset.add(new Employee(102,"b",40000));
		  empset.add(new Employee(103,"c",10000));
		  empset.add(new Employee(104,"d ",30000));
		  empset.add(new Employee(105,"e",20000));
		   
		   System.out.println(empset); 
		   
		   if(empset.contains(new Employee(101,"a",50000))){
			   System.out.println("found");
		   }else {
			   System.out.println("not found");
		   }
		
		
	
//		HashSet<Integer> hs = new HashSet<Integer>();
//		
//		hs.add(10);
//		hs.add(20);
//		hs.add(30);
//		hs.add(40);
//		hs.add(50);
//		hs.add(60);
//		hs.add(70);
//		hs.add(80);
//		hs.add(90);
//		hs.add(540);
//		
//		System.out.println(hs);

		
	}

}
