  bool isCompleteTree(TreeNode* root) {
        int height=heightTree(root)-1;
          queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int size=q.size();
            if(level<height&&(size!=pow(2,level)))
                return false;
              bool b=false;
                  while(size--)
                  {
                      TreeNode* temp=q.front();
                      q.pop();
                      if(level==height-1)
                      {
                          if(temp->left==NULL&&temp->right!=NULL)
                              return false;
                          if(b&&(temp->left!=NULL||temp->right!=NULL))
                              return false;
                          if(temp->right==NULL)
                              b=true;
                      }
                      if(temp->left!=NULL)
                          q.push(temp->left);
                      if(temp->right!=NULL)
                          q.push(temp->right);
                  }
            level++;
        }
               return true;
    }