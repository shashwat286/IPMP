void AlternateSplit(struct node *head )
{
        struct node *prev,*curr,*head1;

        if(head1==NULL)
                return NULL;

        head1= head->next;

        prev=head;
        curr=head->next;

        while( curr!=NULL )
        {
                prev->next = curr->next;
                prev=prev->next;
                if(prev==NULL)
            curr->next=NULL;
                else
                        curr->next=prev->next;
               curr=curr->next;
        }
}