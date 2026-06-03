package Model;



public class SalesManager extends Employee {

	int target;
	double incentive;
	
	public SalesManager() {
		// TODO Auto-generated constructor stub
		this.target = 0;
		this.incentive = 0;
	}
	
	public SalesManager(int id, String name, double salary,int target, double incentive) {
		super(id,name,salary);
		this.target = target;
		this.incentive = incentive;
	}

	
	public int getTarget() {
		return target;
	}

	public void setTarget(int target) {
		this.target = target;
	}

	public double getIncentive() {
		return incentive;
	}

	public void setIncentive(double incentive) {
		this.incentive = incentive;
	}

	
	@Override
	public String toString() {
		return super.toString()+"/ntarget:" + target + "/nincentive:" + incentive;
	}

	@Override
	public double calculateSalary() {
		// TODO Auto-generated method stub
		return this.incentive+this.getSalary();
	}

}
