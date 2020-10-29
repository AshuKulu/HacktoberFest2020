#Implementing a stack using a linked list

class Node:
  def __init__(self,data,next):
    self.data = data
    self.next = next


class LinkedStack:
  def __init__(self):
    self.head = None
    self.size = 0

  def __len__(self):
    return self.size

  def is_empty(self):
    return self.size == 0

  def push(self,e):
    self.head = Node(e,self.head)
    self.size += 1

  def top(self):
    if self.is_empty():
      raise Empty('Stack is empty')

    return self.head.data

  def pop(self):
    if self.is_empty():
      raise Empty('Stack is empty')
    answer = self.head.data
    self.head = self.head.next
    self.size -= 1
    return answer


  def display(self):
    temp = self.head
    while(temp):
      print(temp.data)
      temp = temp.next
    

ls = LinkedStack()
ls.push(10)
ls.push(20)
ls.push(30)
ls.push(40)
ls.pop()
ls.display()
