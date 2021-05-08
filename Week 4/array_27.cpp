static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return(a.second==b.second)?a.first>b.first:a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
           unordered_map<int,int> m;
           int n=nums.size();
        if(nums.size()==1)
            return nums;
           for(int i=0;i<n;i++)
           {
                 m[nums[i]]++;
           }
          vector<pair<int,int>> v;
        for(auto& it:m)
        {
            v.push_back(it);
        }
        sort(v.begin(),v.end(),cmp);
        vector<int> sorted;
        for(auto it:v)
        {
            for(int i=0;i<it.second;i++)
            {
                sorted.push_back(it.first);
            }
        }
        return sorted;
         
    }