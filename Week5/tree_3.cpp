int diameter(Node* root)
    {
        if(root==NULL)
        return 0;
        int lheight=height(root->left);
        int rheight=height(root->right);
        int ldiameter=diameter(root->left);
        int rdiameter=diameter(root->right);
        return max(lheight+rheight+1,max(ldiameter,rdiameter));
    // Your code here
    }
    int height(Node* root)
    {
        if(root==NULL)
        return 0;
        return(max(1+height(root->left),1+height(root->right)));
    }