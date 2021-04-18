 bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int count=0;
        while(slow&&fast&&fast->next)
        {
            if(slow==fast)
                return true;
            slow=slow->next;
            fast=fast->next->next;
            count++;
        }
        return false;
    }