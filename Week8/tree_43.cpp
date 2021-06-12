TreeNode* trimBST(TreeNode* root, int low, int high) {
             if(root==NULL)
                 return NULL;
       root->left=trimBST(root->left,low,high);
       root->right=trimBST(root->right,low,high);
        if(root->val<low)
        {
            TreeNode* rChild=root->right;
            return rChild;
        }
        if(root->val>high)
        {
            TreeNode* lChild=root->left;
            return lChild;
        }
        return root;
    }