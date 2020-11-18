package garbagecollection;

public class GcDemo {

	protected void finalize() throws Throwable {
		System.out.println("Object Garbage Collected");

	}
	public static void main(String[]args) {

		GcDemo g1 = new GcDemo();
		GcDemo g2 = new GcDemo();
		GcDemo g3 = new GcDemo();

		g1 = null;
		g2 = null;
		g3 = null;

		System.gc();
		//Runtime.getRuntime().gc();
	}

}
