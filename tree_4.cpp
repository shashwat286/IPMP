int getMaxWidth(Node* root)
    {
        int MaxWidth=0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            MaxWidth=max(MaxWidth,size);
            while(size--)
            {
                Node* temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                q.push(temp->left);
                if(temp->right!=NULL)
                q.push(temp->right);
            }
        }
        return MaxWidth;
       // Your code here
    }