void doubleTree(Node* root)
{
     if(root==NULL)
	 return;
	 Node* temp;
	 doubleTree(root->left);
	 doubleTree(root->right);
	 temp=root->left;
	 node->left=newNode(root->data);
	 node->left->left=temp;
}
	 
	 Node* newNode(int data) 
{ 
    Node* node = new Node();
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
      
    return(node); 
} 