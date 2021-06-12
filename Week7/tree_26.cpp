Node* leftmost(Node* root)
    {
        Node* temp=root;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        return temp;
        
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
         if(x->right!=NULL)
         return leftmost(x->right);
         Node* temp=NULL;
         while(root!=NULL)
         {
             if(root->data>x->data)
             {
                 temp=root;
                 root=root->left;
             }
             else if(root->data<x->data)
             {
                 root=root->right;
             }
             else
                break;
             }
             return temp;
    }