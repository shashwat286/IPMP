void path(TreeNode* root,vector<int> pathSum,int&maxSum)
    {
        if(root==NULL)
            return;
         pathSum.push_back(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            int sum=0;
            for(int i=0;i<pathSum.size();i++)
            {
                sum=sum+pathSum[i];
            }
            maxSum=max(maxSum,sum);
        }
        path(root->left,pathSum,maxSum);
		path(root->right,pathSum,maxSum);
    }
    int maxPathSum(TreeNode* root) {
        vector<int> pathSum;
		maxSum=0;
          path(root,pathSum,maxSum);
		  return maxSum;
    }