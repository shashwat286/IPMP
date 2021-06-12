 bool findAncestor(Node* root,int target,vector<int>&v)
    {
         if(root==NULL)
         return false;
         if(root->data==target)
           return true;
         if(findAncestor(root->left,target,v)||findAncestor(root->right,target,v))
         {
             v.push_back(root->data);
         }
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
          vector<int> v;
          findAncestor(root,target,v);
          return v;
    }