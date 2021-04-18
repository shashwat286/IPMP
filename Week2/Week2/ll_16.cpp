ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL,*next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* head=NULL;
        ListNode* temp;
        while(l1&&l2)
        {
            if(l1->val>=l2->val)
            {
                 temp=l1->next;
                  l1->next=head;
                  head=l1;
                l1=temp;
            }
            else
                {
                 temp=l2->next;
                  l2->next=head;
                  head=l2;
                l2=temp;
            }
        }
        while(l1)
        {
                 temp=l1->next;
                  l1->next=head;
                  head=l1;
                l1=temp;
            }
        while(l2)
            {
                 temp=l2->next;
                  l2->next=head;
                  head=l2;
                l2=temp;
            }
        return head;
    }