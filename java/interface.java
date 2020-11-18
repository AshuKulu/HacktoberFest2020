
// A simple interface 
interface Player 
{ 
    final int id = 10; 
    int move(); 
} 


// Java program to demonstrate working of  
// interface. 
import java.io.*; 
  
// A simple interface 
interface In1 
{ 
    // public, static and final 
    final int a = 10; 
  
    // public and abstract  
    void display(); 
} 
  
// A class that implements the interface. 
class TestClass implements In1 
{ 
    // Implementing the capabilities of 
    // interface. 
    public void display() 
    { 
        System.out.println("Geek"); 
    } 
  
    // Driver Code 
    public static void main (String[] args) 
    { 
        TestClass t = new TestClass(); 
        t.display(); 
        System.out.println(a); 
    } 
} 
