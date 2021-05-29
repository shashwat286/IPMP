vector<int> leftView(Node *root)
{
    vector<int> v;
    queue<Node*> q;
    bool b;
    q.push(root);
    while(!q.empty())
    {
       int size=q.size();
       for(int i=0;i<size;i++)
       {
           Node* temp=q.front();
           q.pop();
           if(i==0)
            v.push_back(temp->data);
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
       }
    }
    return v;
   
}