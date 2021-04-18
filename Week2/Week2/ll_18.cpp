ListNode* oddEvenList(ListNode* head) {
       if(head==NULL)
           return NULL;
        if(head->next==NULL||head->next->next==NULL)
            return head;
        ListNode* evenStart=head->next;
        
        ListNode* even1=head->next;
        ListNode* even2=head->next;
		ListNode* odd1=head;
        ListNode* odd2=head;
        while(even1!=NULL&&even1->next!=NULL)
        {
            odd2=odd1->next->next;
            odd1->next=odd1->next->next;
            odd1=odd2;
            even2=even1->next->next;
            even1->next=even1->next->next;
            even1=even2;
            
        }
        odd1->next=evenStart;
        return head;
    }