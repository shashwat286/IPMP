void reverseInOrder(TreeNode* root,int& sum)
       {
           if(root==NULL)
               return;
             reverseInOrder(root->right,sum);
             sum=sum+root->val;
             root->val=sum;
             reverseInOrder(root->left,sum);
       }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        reverseInOrder(root,sum);
        return root;
    }