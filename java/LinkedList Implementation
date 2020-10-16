public class main{
class Node{
	int data;
	Node next;
	
	public Node(int data) {
		this.data=data;
		this.next=null;
	}

}

 class MyLinkedList <E> {
	Node head;
	// to add new value at last in my linked list
  
	public void add(int data) {
		Node toAdd=new Node(data);
		if(head==null) {
			head=toAdd;
			return;
		}
		Node temp=head;
		while(temp.next!=null) {
			temp=temp.next;
		}
		temp.next=toAdd;
	 }
	//to add new value at first position in my linked list
  
	public void addFirst(int data) {
		Node first=new Node(data);
		first.next=head;
		head=first;
	}
	
	//to print the number of element in my linked list
  
	public void print() {
		Node temp=head;
		if(temp==null) {
			System.out.println("No Element Found");
		}else {
			while(temp!=null) {
				System.out.print(temp.data+" ");
				temp=temp.next;
			}
		}
	}
	
	//to find length of my linked list
  
	public int length() {
		int count=0;
		Node temp=head;
		while(temp!=null) {
			count++;
			temp=temp.next;
		}
		return count;		
	}
	
	//to get element of given position
  
	public int get(int index) {
		Node temp=head;
		for(int i=0;i<index;i++) {
			temp=temp.next;
		}
		return temp.data;
	}
  
  //Delete node without head pointer
  
	 void deleteNode(Node node)
	    {
	        Node temp=node;
	          temp.data=temp.next.data;
	          temp.next=temp.next.next;
	        temp.next=temp.next.next;
	    }
	
	// removing value from some given place
  
	public int remove(int index) throws Exception{
		 Node temp=head;
		 if(temp==null) {
			 throw new Exception("you cant remove from empty LinkedList");
			 }
		for(int i=0;i<index-1;i++) {
			temp=temp.next;
		}
		Node toRemove=temp.next;
		temp.next=temp.next.next;
		return toRemove.data;		
   	}
 }
 public static void main(String[] args){
   }
 }
