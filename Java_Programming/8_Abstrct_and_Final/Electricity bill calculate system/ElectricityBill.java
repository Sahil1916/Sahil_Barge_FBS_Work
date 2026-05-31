package Abstrct_and_Final;

import java.util.Scanner;

public abstract class ElectricityBill {

	private String coustmerName;
	private int units;

	public ElectricityBill(String coustmerName, int units) {
		super();
		this.coustmerName = coustmerName;
		this.units = units;
	}

	public String getCoustmerName() {
		return coustmerName;
	}

	public void setCoustmerName(String coustmerName) {
		this.coustmerName = coustmerName;
	}

	public int getUnits() {
		return units;
	}

	public void setUnits(int units) {
		this.units = units;
	}

	@Override
	public String toString() {
		return "ElectricityBill [coustmerName=" + coustmerName + ", units=" + units + "]";
	}

	void showUsage() {
		System.out.println(this);

	}

	public abstract double calculateBill();

	final void generateBill() {

	    double fixedCharge = 50;

	    double bill = calculateBill();

	    double tax = bill * 0.05;

	    double totalBill = bill + tax + fixedCharge;

	    System.out.println("Bill Amount : " + bill);
	    System.out.println("Tax (5%) : " + tax);
	    System.out.println("Fixed Charge : " + fixedCharge);
	    System.out.println("Total Bill : " + totalBill);
	}

}

class ResidentialBill extends ElectricityBill {

	public ResidentialBill(String coustmerName, int units) {
		super(coustmerName, units);

	}

	@Override
	public double calculateBill() {

		double bill;

		if (getUnits() <= 100) {
			bill = getUnits() * 2.5;
		} else if (getUnits() <= 300) {
			bill = getUnits() * 3.5;
		} else {
			bill = getUnits() * 5;
		}

		if (getUnits() > 500) {
			bill += 150;
		}

		return bill;
	}

}

class CommercialBill extends ElectricityBill {

	public CommercialBill(String coustmerName, int units) {
		super(coustmerName, units);

	}

	@Override
	public double calculateBill() {

		double bill = getUnits() * 6.5;

		if (getUnits() < 200) {
			return 1500;
		}

		if (getUnits() > 1000) {
			bill += bill * 0.08;
		}

		return bill;
	}

}

class Main {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("1. Residential");
		System.out.println("2. Commercial");
		System.out.print("Enter choice: ");

		int choice = sc.nextInt();
		sc.nextLine(); // consume newline

		System.out.print("Enter customer name: ");
		String customerName = sc.nextLine();

		System.out.print("Enter units consumed: ");
		int units = sc.nextInt();

		ElectricityBill bill;

		if (choice == 1) {

			bill = new ResidentialBill(customerName, units);

		} else {

			bill = new CommercialBill(customerName, units);
		}

		bill.showUsage();
		bill.generateBill();

		sc.close();
	}

}
