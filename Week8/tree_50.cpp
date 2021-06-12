Node* bTreetoDLL(Node* root)
{
    
    if (root == NULL)
        return root;
     if (root->left != NULL) {

        Node* left = bTreetoDLL(root->left);
        
        for (; left->right != NULL; left = left->right)
            ;
 
        left->right = root;
        root->left = left;
    }
 
    if (root->right != NULL) {
       
        Node* right = bTreetoDLL(root->right);
 
        for (; right->left != NULL; right = right->left)
            ;
        right->left = root;
        root->right = right;
    }
    return root;
}
 

 
   Node* bToDLL(Node *root)
    {
        if (root == NULL)
        return root;
 
    root = bTreetoDLL(root);
 
    while (root->left != NULL)
        root = root->left;
 
      return (root);
    }