void deleteAlt(struct Node *head){
    Node* curr=head;
    Node* next=head->next;
    while(curr&&next)
    {
        curr->next=next->next;
        free(next);
        curr=curr->next;
        if(curr!=NULL)
        next=curr->next;
    }
}