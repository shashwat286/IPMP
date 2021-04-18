void reverse(Node* head)
{
   if(head==NULL)
   return;
   reverse(head->next);
   cout<<head->data<<" ";
   }