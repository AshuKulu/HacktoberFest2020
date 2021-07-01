#include <iostream>
using namespace std;
class Stack{
	int stack[100], n = 100, top = -1;
	public:
		void push(int val);
		void pop();
		void display();
};

void Stack::push(int val) {
   if(top >= n-1)
      cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top] = val;
   }
}
void Stack::pop() {
   if(top <= -1)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void Stack::display() {
   if(top>= 0) {
      cout<<"Stack elements are:";
      for(int i = top; i>= 0; i--)
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack is empty";
}
int main() {
	Stack s;
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
         }
         case 2: {
            s.pop();
            break;
         }
         case 3: {
            s.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!= 4);
   return 0;
}
