int getLevelDiff(Node *root)
    {
       queue<Node*> a,b;
       a.push(root);
       int odd=0,even=0;
       while(!a.empty()||!b.empty())
       {
           while(!a.empty())
           {
               Node* temp=a.front();
               odd=odd+temp->data;
               a.pop();
               if(temp->left!=NULL)
               b.push(temp->left);
               if(temp->right!=NULL)
               b.push(temp->right);
           }
           while(!b.empty())
           {
               Node* temp=b.front();
               even=even+temp->data;
               b.pop();
               if(temp->left!=NULL)
               a.push(temp->left);
               if(temp->right!=NULL)
               a.push(temp->right);
           }
           
       }
       return (odd-even);
       //Your code here
    }