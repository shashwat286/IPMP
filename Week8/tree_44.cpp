TreeNode* sumLessthanK(TreeNode* root,int limit,int sum)
    {
         if(root==NULL)
             return NULL;
          if(root->right==NULL&&root->left==NULL)
          {
              if(sum+root->val<limit)
              {
                  return NULL;
              }
              return root;
          }
          root->left=sumLessthanK(root->left,limit,sum+root->val);
          root->right=sumLessthanK(root->right,limit,sum+root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            return NULL;
        }
        return root;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
           return sumLessthanK(root,limit,0);
    }