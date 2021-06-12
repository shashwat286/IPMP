TreeNode* newNode(int data) 
{ 
    TreeNode* node = new TreeNode();
    node->val = data; 
    node->left = NULL; 
    node->right = NULL; 
    return node; 
} 
  TreeNode* listToBST(ListNode* head,ListNode* tail)
  {
      if(head==tail)
          return NULL;
      ListNode* slow=head,*fast=head;
       while(fast!=tail&&fast->next!=tail)
       {
           fast=fast->next->next;
           slow=slow->next;
       }
       TreeNode* root=newNode(slow->val);
      root->left=listToBST(head,slow);
      root->right=listToBST(slow->next,tail);
      return root;
  }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* tail=NULL;
        return listToBST(head,tail);
    }