/*
Input Format 
You have to complete the Node* Insert(Node* head, int data) method which takes two arguments - the head of the linked list and the integer to insert. You should NOT read any input from stdin/console.

Output Format 
Insert the new node at the tail and just return the head of the updated linked list. Do NOT print anything to stdout/console.

Sample Input

NULL, data = 2 
2 --> NULL, data = 3

Sample Output

2 -->NULL
2 --> 3 --> NULL
Explanation 
1. We have an empty list and we insert 2. 
2. We have 2 in the tail, when 3 is inserted 3 becomes the tail.
*/

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* temp; 
    temp =(Node*) malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    
    Node* head_temp=head;
    
    if(head ==NULL){
       head = temp;
    }
    else {
        while(head_temp->next!=NULL){
            head_temp = head_temp->next;
        }
        head_temp->next = temp;
    }
    return head;
}
