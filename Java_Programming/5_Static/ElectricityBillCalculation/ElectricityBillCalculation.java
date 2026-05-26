 class BillCalculation {

    int customerId;
    String customerName;
    String address;
    int phoneNumber;
    int unitsConsumed;
    double totalBillAmount;
    static double ratePerUnit;
    static {
        ratePerUnit = 6.5;
    }

    BillCalculation() {
        this.customerId = 0;
        this.customerName = null;
        this.address = null;
        this.phoneNumber = 0;
        this.unitsConsumed = 0;
        this.totalBillAmount = 0;
    }

    BillCalculation(int customerId, String customerName, String address, int phoneNumber,
            int unitsConsumed) {
        this.customerId = customerId;
        this.customerName = customerName;
        this.address = address;
        this.phoneNumber = phoneNumber;
        this.unitsConsumed = unitsConsumed;
    }

    int getCustomerId() {
        return customerId;
    }

    void setCustomerId(int customerId) {
        this.customerId = customerId;
    }

    String getCustomerName() {
        return customerName;
    }

    void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    String getAddress() {
        return address;
    }

    void setAddress(String address) {
        this.address = address;
    }

    int getPhoneNumber() {
        return phoneNumber;
    }

    void setPhoneNumber(int phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    int getUnitsConsumed() {
        return unitsConsumed;
    }

    void setUnitsConsumed(int unitsConsumed) {
        this.unitsConsumed = unitsConsumed;
    }

    double getTotalBillAmount() {
        return totalBillAmount;
    }

    void setTotalBillAmount(double totalBillAmount) {
        this.totalBillAmount = totalBillAmount;
    }

    static double getRatePerUnit() {
        return ratePerUnit;
    }

    static void setRatePerUnit(double ratePerUnit) {
        BillCalculation.ratePerUnit = ratePerUnit;
    }

    double calculate() {

        totalBillAmount = unitsConsumed * ratePerUnit;
        return totalBillAmount;
    }

}
 class ElectricityBillCalculation {
public static void main(String[] args) {
    BillCalculation b = new BillCalculation(01,"sahil","karad",876794159,100);

     

    double totalBillAmount =  b.calculate();

    System.out.println("the total amount of bill is "+ totalBillAmount);
    System.out.println("the total ligth consume unit is "+b.getUnitsConsumed());
}
    
}

