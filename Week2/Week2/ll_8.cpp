ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* curr=head;
        int count=0;
        while(curr!=NULL)
        {
            curr=curr->next;
            count++;
        }
        while(slow&&fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(count%2==0)
            return slow->next;
        else    
        return slow;
    }