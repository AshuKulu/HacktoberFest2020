import java.util.*;

public class HashMap1 {

	public static void main(String[] args) {
		HashMap<Integer,String> h1= new HashMap<Integer,String>();
		System.out.println("List of elements of hashMap:");
		h1.put(40, "DIvyaansh");
		h1.put(10,"Ashu");
		h1.put(70,"Nisarg");
		h1.put(90, "Rishabh");
		
	
		System.out.println("Check whether it contins key 40 : " + h1.containsKey(40));
		
		System.out.println("Check whether it contains Mridul : " + h1.containsValue("Mridul"));
	
		System.out.println("get all keys from the given HashMap :"+h1.keySet());
		System.out.println("get all values from the given HashMap :"+h1.values());
	
		
		System.out.println("Get all key-value pair :"+h1.entrySet());
		h1.remove(70);
	
		System.out.println("get all keys from the given HashMap :"+h1.keySet());
		System.out.println("Get all key-value pair :"+h1.entrySet());
	    h1.replace(10, "Akshay");
	    System.out.println("Get updated all key-value pair :"+h1.entrySet());
	    System.out.println("Size of hashmap :"+h1.size());
	    System.out.println("Value :"+h1.get(10));
	}

}
