bool isSumTree(Node* root)
    {
        int lsum,rsum;
         if(root==NULL||(root->left==NULL&&root->right==NULL))
         return true;
         if(isSumTree(root->left)&&isSumTree(root->right))
         {
             if(root->left==NULL)
               lsum=0;
               else if(root->left->left==NULL&&root->left->right==NULL)
               lsum=root->left->data;
               else
               lsum=2*(root->left->data);
               
               if(root->right==NULL)
               rsum=0;
               else if(root->right->left==NULL&&root->right->right==NULL)
               rsum=root->right->data;
               else
               rsum=2*(root->right->data);
               return(root->data==lsum+rsum);
         }
    
    }