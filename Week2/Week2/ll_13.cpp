Node* rotate(Node* head, int k)
    {
        Node* pivot;
        Node* curr=head;
        int count =1;
        while(count<k&&curr!=NULL)
        {
            
            curr=curr->next;
            count++;
        }
        pivot=curr;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=head;
        head=pivot->next;
        pivot->next=NULL;
        return head;
    }