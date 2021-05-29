Node* connect(Node* root) {
         if(root == NULL)
            return root;
         queue<Node*> q;
       q.push(root);
       while(!q.empty())
       {
           int size=q.size();
           Node* temp1=q.front();
           q.pop();
           if(temp1->left!=NULL)
           q.push(temp1->left);
           if(temp1->right!=NULL)
           q.push(temp1->right);
           size--;
           while(size--)
           {
                Node* temp2=q.front();
                q.pop();
                temp2->next=NULL;
                temp1->next=temp2;
                temp1=temp2;
                if(temp2->left!=NULL)
                q.push(temp2->left);
                if(temp2->right!=NULL)
                q.push(temp2->right);
           }
        
    }
        return root;
    }