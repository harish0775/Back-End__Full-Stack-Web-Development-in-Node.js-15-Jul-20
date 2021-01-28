package Data;

// // Stack implementation in Java

// class Stack {
//     private int arr[];
//     private int top;
//     private int capacity;
  
//     // Creating a stack
//     Stack(int size) {
//       arr = new int[size];
//       capacity = size;
//       top = -1;
//     }
  
//     // Add elements into stack
//     public void push(int x) {
//       if (isFull()) {
//         System.out.println("OverFlow\nProgram Terminated\n");
//         System.exit(1);
//       }
  
//       System.out.println("Inserting " + x);
//       arr[++top] = x;
//     }
  
//     // Remove element from stack
//     public int pop() {
//       if (isEmpty()) {
//         System.out.println("STACK EMPTY");
//         System.exit(1);
//       }
//       return arr[top--];
//     }
  
//     // Utility function to return the size of the stack
//     public int size() {
//       return top + 1;
//     }
  
//     // Check if the stack is empty
//     public Boolean isEmpty() {
//       return top == -1;
//     }
  
//     // Check if the stack is full
//     public Boolean isFull() {
//       return top == capacity - 1;
//     }
  
//     public void printStack() {
//       for (int i = 0; i <= top; i++) {
//         System.out.println(arr[i]);
//       }
//     }
  
//     public static void main(String[] args) {
//       Stack stack = new Stack(5);
  
//       stack.push(1);
//       stack.push(2);
//       stack.push(3);
//       stack.push(4);
  
//       stack.pop();
//       System.out.println("\nAfter popping out");
  
//       stack.printStack();
  
//     }
//   }





public class stack {
  Node head;

  class Node{
      int iteam;
      Node  next;

      Node(int d){
          iteam =d;
          next = null;
      }
  }
// insert At Beginning
public void insertAtBegnning(int data){
    Node new_node = new Node(data);
    new_node.next = head;
    head = new_node;
}
  
  // insert After 
public void insertAfter(Node prev_node ,int data){
    if(prev_node == null){
          System.out.println("The given prevoius node cannot be null");
        return ;
    }
    Node new_node = new Node(data);
    new_node.next = prev_node.next;
    prev_node.next = new_node;
}
     //insertAtEnd

  public void insertAtEnd(int data){
    Node new_node = new Node(data);
    if(head == null){
        head = new Node(data);
        return;
    }
    new_node.next = null;
    Node last = head;
    while(last.next!= null)
    last = last.next;
    last.next = new_node;
    return;
  }

    void deleteNode(int position){
      if(head == null){
        return ;
      }
      Node node = head;
      if(position == 0;){
        head = node
      }
    }


























