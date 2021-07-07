import java.util.HashMap;

public class hashmap {

	public static void main(String[] args) {
		HashMap <Integer,String> obj=new HashMap<>();  //making object of HashMap
obj.put(1, "Divyaansh");    //Adding values in HashMap
obj.put(2, "Jain");
obj.put(3, "Aman");
System.out.println(obj.containsKey(3));    //checking whether HashMap contains a particular key or not
System.out.println(obj.containsValue("Jain"));  //checking whether HashMap contains a particular value or not
System.out.println(obj.keySet());  //to get all the keys from the HashMap
System.out.println(obj);
	}

}