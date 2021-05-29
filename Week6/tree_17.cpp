void boundaryLeft(Node* root,vector<int>&v)
  {
      if(root==NULL)
      return;
      if(root->left!=NULL)
      {
          v.push_back(root->data);
          boundaryLeft(root->left,v);
      }
      else if(root->right!=NULL)
      {
          v.push_back(root->data);
          boundaryLeft(root->right,v);
      }
      
  }
  void boundaryRight(Node* root,vector<int>&v)
  {
      if(root==NULL)
      return;
      if(root->right!=NULL)
      {
          boundaryRight(root->right,v);
          v.push_back(root->data);
      }
      else if(root->left!=NULL)
      {
          boundaryRight(root->left,v);
          v.push_back(root->data);
      }
  }
  void Leaves(Node* root,vector<int>&v)
  {
      if(root==NULL)
      return;
      Leaves(root->left,v);
      if(root->left==NULL&&root->right==NULL)
      {
      v.push_back(root->data);
      }
      Leaves(root->right,v);
  }
    vector <int> printBoundary(Node *root)
    {
        vector<int> v;
        v.push_back(root->data);
        boundaryLeft(root->left,v);
        Leaves(root->left,v);
        Leaves(root->right,v);
        boundaryRight(root->right,v);
        return v;
        //Your code here
    }