import java.util.*;
public class Main {
		public static void main(String[] args) {
			Scanner scn = new Scanner(System.in);
			int t = scn.nextInt();//Dividend
			int k = scn.nextInt();// Divisor
			int ans = 1;
			int lo = k,hi = t;
			while(lo<=hi)
			{
				
				int mid = (lo+hi)/2;
			
				if(mid * k == t)
				{
					ans = mid;
					break;
				}
				else if(mid * k < t)
				{
					lo = mid + 1;
					ans = mid;
				}
				else
				{
					hi = mid - 1;
				}
				
			}
			System.out.println(" ecdcd" + ans);
			}
}
