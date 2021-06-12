int minValue(Node* root)
{
    if(root!=NULL&&root->left==NULL)
    return root->data;
    minValue(root->left);
    
}