package Model;

public class Admin extends Employee{

	double allowance;
	
	public Admin() {
		
	}
	
	public Admin(int id, String name, double salary,double allowance) {
		super(id,name,salary);
		this.allowance = allowance;
	}
	

	public double getAllowance() {
		return allowance;
	}

	public void setAllowance(double allowance) {
		this.allowance = allowance;
	}

	@Override
	public double calculateSalary() {
		// TODO Auto-generated method stub
		return this.getSalary()+this.allowance;
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return super.toString()+"\nCommission:"+this.allowance;
	}

}
