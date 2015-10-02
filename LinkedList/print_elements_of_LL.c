/*
Input Format 
You have to complete the void Print(Node* head) method which takes one argument - the head of the linked list. You should NOT read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Output Format 
Print the elements of the linked list to stdout/console (using printf or cout) , one per line.

Sample Input

NULL  
1->2->3->NULL
Sample Output

1
2
3
Explanation

For first case, an empty list is passed to the method. So nothing is printed. For second case, all the elements of the linked list (1, 2 and 3) are printed in separate lines.
*/
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    if(head==NULL){
        return;
    }
    else {
        while(head!= NULL){
            printf("%d\n",head->data);
            head = head->next;
        }
    }
}
