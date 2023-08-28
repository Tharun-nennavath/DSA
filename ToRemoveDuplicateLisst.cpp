Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(head == NULL || head -> next == NULL)
 {
     return head;
 }
  Node*temp = head;
 while( temp != NULL && temp->next)
 {
     Node*tp = temp -> next;
     if(temp -> data == temp -> next -> data)
     {
        temp -> next = temp -> next -> next;
        free (tp);
     }
     else
     {
        temp = temp -> next;
     }
     
     }
     return head;
 }
