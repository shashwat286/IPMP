 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp=target-nums[i];
            auto itr=m.find(temp);
            if(itr!=m.end())
            {
                v.push_back(m[temp]);
                v.push_back(i);
            }
            else
            m.insert({nums[i],i});
        }
        return v;
    }