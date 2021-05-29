void verticalSumCalc(Node* root,map<int,int>&m,int h)
    {
        if(root==NULL)
        return;
        verticalSumCalc(root->left,m,h-1);
        m[h]=m[h]+root->data;
        verticalSumCalc(root->right,m,h+1);
    }
    vector <int> verticalSum(Node *root) {
        vector<int> v;
        map<int,int> m;
        map<int,int>::iterator it;
        verticalSumCalc(root,m,0);
        for(it=m.begin();it!=m.end();it++)
        {
            v.push_back(it->second);
        }
        return v;
        // add code here.
    }