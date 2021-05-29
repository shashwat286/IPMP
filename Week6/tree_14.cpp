bool levelCheck(Node* root,int &leaflevel,int level)
    {
        if(root==NULL)
        return true;
        if(root->left==NULL&&root->right==NULL)
        {
            if(leaflevel==0)
            {
                leaflevel=level;
                return true;
            }
            if(level==leaflevel)
            return true;
            else
            return false;
        }
        return(levelCheck(root->left,leaflevel,level+1)&&
        levelCheck(root->right,leaflevel,level+1));
    }
   
    bool check(Node *root)
    {
        int leaflevel=0;
        int level=0;
         return levelCheck(root,leaflevel,level);
     
    }