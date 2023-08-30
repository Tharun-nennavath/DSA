Node* deleteNode(Node *head,int x)
{
    if(x == 1)
    {
        return head->next;
    }
    Node *curr=head;
    int count=1;
    while(curr->next!=NULL)
    {
        if(count!=x-1)
        {
            count++;
            curr=curr->next;
        }
        else
        {
            curr->next=curr->next->next;
            return head;
     }
    }
    
    
}
