/*
Input Format 
You have to complete the Node* Insert(Node* head, int data) method which takes two arguments - the head of the linked list and the integer to insert. You should NOT read any input from stdin/console.

Output Format 
Insert the new node at the head and return the head of the updated linked list. Do NOT print anything to stdout/console.

Sample Input

NULL , data = 1 
1 --> NULL , data = 2

Sample Output

1 --> NULL
2 --> 1 --> NULL
Explanation 
1. We have an empty list, on inserting 1, 1 becomes new head. 
2. We have a list with 1 as head, on inserting 2, 2 becomes the new head.
*/

/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    Node* temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}
