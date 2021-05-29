vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        s.push(temp);
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }
    while(!s.empty())
    {
        Node* temp=s.top();
        v.push_back(temp->data);
        s.pop();
    }
    return v;
   
}