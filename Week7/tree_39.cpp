void inOrder(TreeNode* root,int& k,int& element)
    {
        if(root==NULL)
            return;
        inOrder(root->left,k,element);
        k--;
        if(k==0)
        {
            element=root->val;
        }
        inOrder(root->right,k,element);
    }
    int kthSmallest(TreeNode* root, int k) {
        int element=0;
        inOrder(root,k,element);
        return element;
    }