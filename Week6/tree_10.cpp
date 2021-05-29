vector<int> findSpiral(Node *root)
{
    vector<int> v;
    stack<Node*> a,b;
    a.push(root);
    while(!a.empty()||!b.empty())
    {
        while(!a.empty())
        {
            Node* temp=a.top();
            v.push_back(temp->data);
            a.pop();
            if(temp->right!=NULL)
            b.push(temp->right);
            if(temp->left!=NULL)
            b.push(temp->left);
        }
         while(!b.empty())
        {
            Node* temp=b.top();
            v.push_back(temp->data);
            b.pop();
            if(temp->left!=NULL)
            a.push(temp->left);
            if(temp->right!=NULL)
            a.push(temp->right);
        }
         }
    return v;
   
}