package hashmap;



public class Employee{
	
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
		
		Employee e1 = (Employee)obj;
		if(this.getId()==e1.getId())
			return  true;
			else
				return false;
	}
	
	@Override
	public int hashCode() {
		// TODO Auto-generated method stub
		return this.getId();
	}
	
}

