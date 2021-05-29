vector<int> levelOrder(Node* node)
    {
      vector<int> v;
      queue<Node*> q;
      q.push(node);
      while(!q.empty())
      {
          int size=q.size();
          while(size--)
          {
              Node* temp=q.front();
              v.push_back(temp->data);
              q.pop();
              if(temp->left!=NULL)
              q.push(temp->left);
              if(temp->right!=NULL)
              q.push(temp->right);
          }
      }
      return v;
    }