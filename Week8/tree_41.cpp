 void inOrder(TreeNode* root,TreeNode **prev,TreeNode **first,TreeNode **middle,TreeNode ** last)
    {
        if(root==NULL)
            return;
        inOrder(root->left,prev,first,middle,last);
        if(*prev&&root->val<(*prev)->val)
        {
            if(!*first)
            {
                *first=*prev;
                *middle=root;
            }
            else
                *last=root;
        }
          *prev=root;
          inOrder(root->right,prev,first,middle,last);
    }
    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void recoverTree(TreeNode* root) {
        TreeNode *prev,*first,*middle,*last;
        prev=first=middle=last=NULL;
        inOrder(root,&prev,&first,&middle,&last);
        if(first&&last)
        {
            swap(&(first->val),&(last->val));
        }
        else if(first&&middle)
        {
            swap(&(first->val),&(middle->val));
        }
    }