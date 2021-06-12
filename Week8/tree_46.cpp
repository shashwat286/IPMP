bool path(TreeNode* root,vector<int> pathSum,int targetSum)
    {
        if(root==NULL)
            return false;
         pathSum.push_back(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            int sum=0;
            for(int i=0;i<pathSum.size();i++)
            {
                sum=sum+pathSum[i];
            }
            if(sum==targetSum)
                return true;
        }
        return(path(root->left,pathSum,targetSum)||path(root->right,pathSum,targetSum));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> pathSum;
          return path(root,pathSum,targetSum);
    }