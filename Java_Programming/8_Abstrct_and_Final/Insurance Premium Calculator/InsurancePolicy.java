package Abstrct_and_Final;

import java.util.Scanner;

public abstract class InsurancePolicy {

    private String policyHolderName;
    private double basePremium;

    public InsurancePolicy(String policyHolderName, double basePremium) {
        this.policyHolderName = policyHolderName;
        this.basePremium = basePremium;
    }

    public String getPolicyHolderName() {
        return policyHolderName;
    }

    public void setPolicyHolderName(String policyHolderName) {
        this.policyHolderName = policyHolderName;
    }

    public double getBasePremium() {
        return basePremium;
    }

    public void setBasePremium(double basePremium) {
        this.basePremium = basePremium;
    }

    public abstract double calculatePremium();

    @Override
    public String toString() {
        return "InsurancePolicy [policyHolderName=" + policyHolderName
                + ", basePremium=" + basePremium + "]";
    }

    public void printDetails() {
        System.out.println(this);
        System.out.println("Calculated Premium = " + calculatePremium());
    }
}


// ==================== Car Insurance ====================

class CarInsurance extends InsurancePolicy {

    private int carAgeInYears;
    private boolean hadAccidentInLastYear;
    private double carValue;

    public CarInsurance(String policyHolderName, double basePremium,
                        int carAgeInYears,
                        boolean hadAccidentInLastYear,
                        double carValue) {

        super(policyHolderName, basePremium);
        this.carAgeInYears = carAgeInYears;
        this.hadAccidentInLastYear = hadAccidentInLastYear;
        this.carValue = carValue;
    }

    public int getCarAgeInYears() {
        return carAgeInYears;
    }

    public void setCarAgeInYears(int carAgeInYears) {
        this.carAgeInYears = carAgeInYears;
    }

    public boolean isHadAccidentInLastYear() {
        return hadAccidentInLastYear;
    }

    public void setHadAccidentInLastYear(boolean hadAccidentInLastYear) {
        this.hadAccidentInLastYear = hadAccidentInLastYear;
    }

    public double getCarValue() {
        return carValue;
    }

    public void setCarValue(double carValue) {
        this.carValue = carValue;
    }

    @Override
    public double calculatePremium() {

        double base = getBasePremium();
        double premium = base;

        // Car age loading
        if (carAgeInYears <= 3) {
            premium += base * 0.10;
        } else if (carAgeInYears <= 7) {
            premium += base * 0.20;
        } else {
            premium += base * 0.30;
        }

        // Accident history
        if (hadAccidentInLastYear) {
            premium += base * 0.25;
        } else {
            premium -= base * 0.10;
        }

        // High-value car surcharge
        if (carValue > 1000000) {
            premium += 2000;
        }

        return premium;
    }

    @Override
    public String toString() {
        return "CarInsurance [policyHolderName=" + getPolicyHolderName()
                + ", basePremium=" + getBasePremium()
                + ", carAgeInYears=" + carAgeInYears
                + ", hadAccidentInLastYear=" + hadAccidentInLastYear
                + ", carValue=" + carValue + "]";
    }
}


// ==================== Health Insurance ====================

class HealthInsurance extends InsurancePolicy {

    private int age;
    private boolean isSmoker;
    private boolean hasPreExistingDisease;

    public HealthInsurance(String policyHolderName,
                           double basePremium,
                           int age,
                           boolean isSmoker,
                           boolean hasPreExistingDisease) {

        super(policyHolderName, basePremium);
        this.age = age;
        this.isSmoker = isSmoker;
        this.hasPreExistingDisease = hasPreExistingDisease;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public boolean isSmoker() {
        return isSmoker;
    }

    public void setSmoker(boolean smoker) {
        isSmoker = smoker;
    }

    public boolean hasPreExistingDisease() {
        return hasPreExistingDisease;
    }

    public void setPreExistingDisease(boolean hasPreExistingDisease) {
        this.hasPreExistingDisease = hasPreExistingDisease;
    }

    @Override
    public double calculatePremium() {

        double base = getBasePremium();
        double premium = base;

        // Age loading
        if (age < 30) {
            premium += base * 0.10;
        } else if (age <= 45) {
            premium += base * 0.25;
        } else {
            premium += base * 0.40;
        }

        // Smoker loading
        if (isSmoker) {
            premium += base * 0.30;
        } else {
            premium -= base * 0.05;
        }

        // Pre-existing disease loading
        if (hasPreExistingDisease) {
            premium += base * 0.20;
        }

        return premium;
    }

    @Override
    public String toString() {
        return "HealthInsurance [policyHolderName=" + getPolicyHolderName()
                + ", basePremium=" + getBasePremium()
                + ", age=" + age
                + ", isSmoker=" + isSmoker
                + ", hasPreExistingDisease=" + hasPreExistingDisease + "]";
    }
}


 class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Choose Policy Type:");
        System.out.println("1. Car Insurance");
        System.out.println("2. Health Insurance");
        System.out.print("Enter your choice: ");

        int choice = sc.nextInt();
        sc.nextLine(); // consume newline

        InsurancePolicy policy = null;

        System.out.print("Enter Policy Holder Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Base Premium: ");
        double basePremium = sc.nextDouble();

        switch (choice) {

        case 1:
            System.out.print("Enter Car Age (in years): ");
            int carAge = sc.nextInt();

            System.out.print("Had accident in last year? (true/false): ");
            boolean accident = sc.nextBoolean();

            System.out.print("Enter Car Value: ");
            double carValue = sc.nextDouble();

            policy = new CarInsurance(
                    name,
                    basePremium,
                    carAge,
                    accident,
                    carValue);

            break;

        case 2:
            System.out.print("Enter Age: ");
            int age = sc.nextInt();

            System.out.print("Are you a smoker? (true/false): ");
            boolean smoker = sc.nextBoolean();

            System.out.print("Any pre-existing disease? (true/false): ");
            boolean disease = sc.nextBoolean();

            policy = new HealthInsurance(
                    name,
                    basePremium,
                    age,
                    smoker,
                    disease);

            break;

        default:
            System.out.println("Invalid Choice!");
            sc.close();
            return;
        }

        System.out.println("\n===== POLICY DETAILS =====");
        policy.printDetails();

        sc.close();
    }
}

