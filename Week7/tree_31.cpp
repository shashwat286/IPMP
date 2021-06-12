 int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(1+height(root->left),1+height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
          int lheight=height(root->left);
          int rheight=height(root->right);
           if(abs(lheight-rheight)<=1&&isBalanced(root->left)&&isBalanced(root->right))
               return true;
        return false;
    }