int getNthFromLast(Node *head, int n)
{
       Node* curr=head;
       int length=0;
       
       while(curr!=NULL)
       {
           curr=curr->next;
           length++;
       }
       if(length<n)
       return -1;
       curr=head;
       for(int i=1;i<length-n+1;i++)
       {
           curr=curr->next;
       }
       return curr->data;
}
