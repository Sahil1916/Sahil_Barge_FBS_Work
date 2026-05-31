package Abstrct_and_Final;

public abstract class Payment {

	private String paymentId;
	private double amount;
	private String payerName;
	private String status;

	public Payment(String paymentId, double amount, String payerName) {

		this.paymentId = paymentId;
		this.amount = amount;
		this.payerName = payerName;
		this.status = "pending";
	}

	public String getPaymentId() {
		return paymentId;
	}

	public void setPaymentId(String paymentId) {
		this.paymentId = paymentId;
	}

	public double getAmount() {
		return amount;
	}

	public void setAmount(double amount) {
		this.amount = amount;
	}

	public String getPayerName() {
		return payerName;
	}

	public void setPayerName(String payerName) {
		this.payerName = payerName;
	}

	public String getStatus() {
		return status;
	}

	public void setStatus(String status) {
		this.status = status;
	}

	abstract boolean validate();

	abstract void deductAmount();

	abstract void sendNotification();

	final void process() {
		if (validate()) {

			deductAmount();
			sendNotification();
			status = "SUCCESS";

		} else {
			status = "FAILED..........";
		}
	}

	void printSummary() {

		System.out.println("Payment ID : " + paymentId);
		System.out.println("Amount : " + amount);
		System.out.println("Payer Name : " + payerName);
		System.out.println("Status : " + status);
	}

}

class CardPayment extends Payment {

	private String cardNumber;
	private String cvv;

	public CardPayment(String paymentId, double amount, String payerName, String cardNumber, String cvv) {
		super(paymentId, amount, payerName);
		this.cardNumber = cardNumber;
		this.cvv = cvv;
	}

	@Override
	boolean validate() {

		return cardNumber.length() == 16 && cvv.length() == 3 && getAmount() > 0;
	}

	@Override
	void deductAmount() {
		System.out.println("Amount deducted using card payment.");

	}

	@Override
	void sendNotification() {
		System.out.println("Notification sent for card payment.");

	}

}

class UPIPayment extends Payment {

	private String upiId;

	public UPIPayment(String paymentId, double amount, String payerName, String upiId) {
		super(paymentId, amount, payerName);
		this.upiId = upiId;
	}

	@Override
	boolean validate() {

		return upiId.contains("@") && getAmount() >= 1 && getAmount() <= 100000;
	}

	@Override
	void deductAmount() {
		System.out.println("Amount deducted using upi payment.");

	}

	@Override
	void sendNotification() {
		System.out.println("Notification sent for upi payment.");

	}

}

class Main {

	public static void main(String[] args) {

		Payment p = new CardPayment("P01", 500000.00, "sahil", "1111222233334444", "123");

		p.process();
		p.printSummary();

		Payment p1 = new UPIPayment("u01", 5000000, "suraj", "suraj@a123");
		p1.process();
		p1.printSummary();
	}
}
