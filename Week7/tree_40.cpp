void inOrder(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
            return;
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        inOrder(root,v);
        int l=0,r=v.size()-1;
        while(l<r)
        {
            if(v[l]+v[r]==k)
                return true;
            else if(v[l]+v[r]<k)
                l++;
            else
                r--;
        }
        return false;
    }