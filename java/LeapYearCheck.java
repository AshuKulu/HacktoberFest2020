import java.util.Scanner;

public class LeapYearCheck {
  public static void main(String[] args) {
    System.out.println("Enter a year: ");
    Scanner scan = new Scanner(System.in);
    int year = scan.nextInt();
    scan.close();

    boolean isLeap = false;
    if(year % 4 == 0){
      if(year % 100 == 0){
        if(year % 400 == 0){
          isLeap = true;
        }
      } else {
        isLeap = true;
      }
    }

    if(isLeap){
      System.out.println(year + " is a Leap Year");
    } else {
      System.out.println(year + " is not a Leap Year");
    }
  }
}