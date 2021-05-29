vector<int> Kdistance(struct Node *root, int k)
{
    queue<Node*> q;
    vector<int> v;
    int level=0;
    bool flag=false;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        while(size--)
        {
            Node* temp=q.front();
            q.pop();
            if(level==k)
            {
                flag=true;
                v.push_back(temp->data);
            }
            else
            {
                if(temp->left!=NULL)
                q.push(temp->left);
                if(temp->right!=NULL)
                q.push(temp->right);
            }
        }
        level++;
        if(flag)
        break;
    }
    return v;
}