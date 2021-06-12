int sumTree(Node* node)
    {
        if(node==NULL)
          return 0;
          int data=node->data;
          node->data=sumTree(node->left)+sumTree(node->right);
          return node->data+data;
    }
    void toSumTree(Node *node)
    {
        sumTree(node);
    }