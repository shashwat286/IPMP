ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* prev=NULL,*next=NULL;
        ListNode* join=NULL;
        ListNode* newHead=NULL;
        ListNode* end=NULL;
        ListNode* nr=NULL;
        int n=0;
        while(curr!=NULL)
        {
            n++;
            curr=curr->next;
        }
        int m=n%k;
        int i=1;
       ListNode* curr2=head;
        
        while(curr2&&i<=n-m)
        {
            curr2=curr2->next;
            i++;
        }
        nr=curr2;
        
        ListNode* curr3=head;
        int count=0;
        while(curr3!=nr)
        {   
            count=0;
             join=curr3;
            prev=NULL;
            while(curr3!=nr&&count<k)
            {
                  next=curr3->next;
                curr3->next=prev;
                  prev=curr3;
                  curr3=next;
                count++;
            }
            if(!newHead)
                newHead=prev;
            if(end)
                end->next=prev;
            end=join;
			end->next=curr3;
			count=0;
			while(curr3&&count<k)
			{
			prev=curr3;
			curr3=curr3->next;
			}
			end=prev;
        }
        join->next=nr;
        return newHead;
    }