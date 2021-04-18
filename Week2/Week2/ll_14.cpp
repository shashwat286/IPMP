ListNode* curr=head;
        ListNode* prev=NULL,*next=NULL;
        ListNode* join=NULL;
        ListNode* newHead=NULL;
        ListNode* end=NULL;
        ListNode* nr=NULL;
        int n=1;
        while(curr!=NULL)
        {
            curr=curr->next;
            n++;
        }
        int m=n%k;
        curr=head;
        int i=1;
        while(curr&&i<=n-m)
        {
            curr=curr->next;
        }
        nr=curr;
        curr=head;
        int count=0;
        while(curr!=nr)
        {    
            ListNode* first=curr;
            count=0;
             join=first;
            prev=NULL;
            while(curr!=nr&&count<k)
            {
                  next=curr->next;
                curr->next=prev;
                  prev=curr;
                  curr=next;
                count++;
            }
            if(!newHead)
                newHead=prev;
            else
                end->next=prev;
            end=first;
        }
        join->next=nr;
        return newHead;
    }