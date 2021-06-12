 void findPaths(Node* root,vector<int> a,vector<vector<int>>&v)
 {
      if(root==NULL)
      return;
     a.push_back(root->data);
      if(root->left==NULL&&root->right==NULL)
      {
          v.push_back(a);
      }
      else
      {
          findPaths(root->left,a,v);
          findPaths(root->right,a,v);
      }
 }
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>>v;
     vector<int> a;
     findPaths(root,a,v);
     return v;
}