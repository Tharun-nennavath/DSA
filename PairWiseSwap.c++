class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
       Node* temp = head;
       Node* prev = NULL;
 
    /* Traverse further only if 
    there are at-least two nodes left */
        while (temp != NULL && temp->next != NULL) {
            // Swap the nodes
            Node* nextNode = temp->next;
            temp->next = nextNode->next;
            nextNode->next = temp;

            // Update head if the first pair is being swapped
            if (prev == NULL) {
                head = nextNode;
            } else {
                // Update the previous node's next pointer to the swapped pair
                prev->next = nextNode;
            }

            // Move temp by 2 for the next pair
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};
