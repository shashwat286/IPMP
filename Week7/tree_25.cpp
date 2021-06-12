TreeNode* inOrder(TreeNode* root,int& lsum,int sum)
    {
        if(root==NULL)
            return root;
        inOrder(root->left,lsum,sum);
        int temp=root->val;
          root->val=sum-lsum;
          lsum=lsum+temp;
        inOrder(root->right,lsum,sum);
        return root;
    }
    int inOrdersum(TreeNode* root,int& sum)
    {
        if(root==NULL)
            return 0;
        inOrdersum(root->left,sum);
        sum=sum+root->val;
        inOrdersum(root->right,sum);
        return sum;
    }
    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* temp=NULL;
        int sum=0;
        inOrdersum(root,sum);
        int lsum=0;
        return inOrder(root,lsum,sum);
    }