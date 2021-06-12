bool Symmetric(TreeNode* root1,TreeNode* root2)
        {
            if(root1==NULL&&root2==NULL)
                return true;
            if(root1!=NULL&&root2!=NULL&&root1->val==root2->val)
                return(Symmetric(root1->left,root2->right)
                       &&Symmetric(root1->right,root2->left));
            return false;
        }
    bool isSymmetric(TreeNode* root) {
        return Symmetric(root->left,root->right);
    }