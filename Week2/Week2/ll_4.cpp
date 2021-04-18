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
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
         else if(head->next==NULL)
            return true;
        else if(head->next->next==NULL)
        {
            if(head->val==head->next->val)
                return true;
            else
                return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow=reverse(slow);
        fast=head;
        while(slow)
        {
            if(slow->val!=fast->val)
                return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }