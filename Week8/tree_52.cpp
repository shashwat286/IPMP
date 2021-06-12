TreeNode* newNode(int data) 
{ 
    TreeNode* node = new TreeNode();
    node->val = data; 
    node->left = NULL; 
    node->right = NULL; 
  
    return node; 
} 
    TreeNode* constructTree(vector<int>& nums,int low,int high)
    {
        if(low>high)
            return NULL;
        int mid=(low+high)/2;
        TreeNode* root=newNode(nums[mid]);
        root->left=constructTree(nums,low,mid-1);
        root->right=constructTree(nums,mid+1,high);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
         TreeNode* root=constructTree(nums,0,n-1);
        return root;
    }