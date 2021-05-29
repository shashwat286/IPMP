int getSize(Node* node)
{
    if(node==NULL)
    return 0;
   return(getSize(node->left)+1+getSize(node->right));
 
}