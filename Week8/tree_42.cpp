void inOrder(Node* root,vector<int>&v,int low,int high)
{
    if(root==NULL)
    return;
    if(root->data>=low)
    {
        inOrder(root->left,v,low,high);
    }
    if(root->data>=low&&root->data<=high)
     v.push_back(root->data);
     if(root->data<=high)
     {
         inOrder(root->right,v,low,high);
     }
    
}
vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> v;
    inOrder(root,v,low,high);
    return v;
}
