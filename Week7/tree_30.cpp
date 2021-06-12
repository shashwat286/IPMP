bool inOrder(TreeNode* root,TreeNode* temp)
    {
        if (root!=NULL)
    {
        if (!inOrder(root->left,temp))
          return false;
       else if(temp!=NULL&&root->val<=temp->val)
          return false;
          temp = root;
          return (inOrder(root->right,temp));
            
        }
       return true;
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* temp=NULL;
        return inOrder(root,temp);
    }