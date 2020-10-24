import java.util.Scanner;

public class cashregister {
    public static void main(String[] args){
        
        int total, discount, pay;
        String card;
        Scanner sc = new Scanner (System.in);

        System.out.print("Do you have member card (y or t) ? ");
        card = sc.nextLine();

        System.out.print("How much the total for your groceries ? Rp ");
        total = sc.nextInt();

        if (card.equals("y")){
            if (total > 500000) {
                discount = 50000;
            }
            else{
                discount = 25000;
            }
        }
        else {
            if (total > 200000) {
                discount = 100000;
            }
            else {
                discount = 0;
            }
        }
        pay = total - discount;
        System.out.println("Total must you pay : Rp " + pay);
    }
}