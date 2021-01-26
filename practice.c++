

// Stack implementation in Java

class Stack { 
       private int arr[];
       private int top;
       private int  capacity;


    //Creating a stack
    Stack(int size){
        arr = new int[size];
        capacity = size;
        top -1;
    }

public void push(int x){
    if(isfull()){
        System.out.println("OverFlow\n program Terminated \n");
        System.exit(1);
    }
    System.out.println("Inserting" + x);
    arr[++top] = x;
}

//Removing element from Stack

 public int pop(){
     if(isempty()){
         System.out.println("Stack-Empty");
     }
return arr[top--];
 }
  public int size(){
      return top +1;
  }
  //check if stack is full
  public Boolean isfull(){
      return top == capacity -1;
  }

 public void printStack(){
     for (int i = 0; i < count; i++){
         System.out.println(arr[i]);
     }
 }

 public static void main(String []args){
     Stack stack = new Stack(5);
     stack.push(1);
     stack.push(2);
     stack.push(3);
     stack.push(4);
     stack.push(5);

     stack.pop();
     System.out,println("\n After popping out")
      Stack.printStack();
     
 } 

 }