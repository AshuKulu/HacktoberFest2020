//program to calculate emi in java
import java.util.*;
import java.util.Scanner;
class Emi
{ 
    public static void main(String []args)
    {
        Scanner a = new Scanner(System.in);
         
        double principal, rate, time, emi;
  
        System.out.print("Enter principal: ");
        principal = a.nextFloat();
      
        System.out.print("Enter rate: ");
        rate = a.nextFloat();
      
        System.out.print("Enter time in year: ");
        time = a.nextFloat();
      
        rate=rate/(12*100); 
        time=time*12; 
      
      
        emi= emiCalculation(principal,rate,time);
      
        System.out.print("Monthly EMI is= "+emi+"\n");
                 
    }
    static double emiCalculation(double p,double r,double t)
    {
      double e= (p*r*Math.pow(1+r,t))/(Math.pow(1+r,t)-1);
      return e;
    }
}
