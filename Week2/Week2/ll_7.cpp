void removeLoop(struct ListNode *head)
{
    
    struct ListNode *ptr1 = head;
    struct ListNode *ptr2 = head;
    int flag = 0;
    while (ptr2 != NULL && ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
       
        if (ptr1 == ptr2)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
       ptr1 = head;
        while (ptr1->next != ptr2->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr2->next = NULL;
    }
}