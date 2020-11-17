//program to calculate emi in java
import java.util.*;
import java.util.Scanner;

class Emi {
    
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        
        System.out.print("Enter principal: ");
        double principal = a.nextFloat();
      
        System.out.print("Enter rate: ");
        double rate = a.nextFloat() / (12 * 100);
      
        System.out.print("Enter time in year: ");
        double time = a.nextFloat() * 12;
        
        double emi = emiCalculation(principal, rate, time);
        System.out.println("Monthly EMI is = " + emi);         
    }
    
    static double emiCalculation(double p, double r, double t) {
        return (p * r * Math.pow(1 + r, t)) / (Math.pow(1 + r, t) - 1);
    }
    
}
