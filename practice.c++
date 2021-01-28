

public class practice {
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
        Node new_Node = new Node(data);
        new_node.next = head;
        head = new_node;
    }
      
      // insert After 
    Public void insertAfter(Node prev_node ,int data){
        if(prev_node == null){
            
            return ;

        }
    }
   
}
