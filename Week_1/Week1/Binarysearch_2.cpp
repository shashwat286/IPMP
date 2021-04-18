 int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int r=nums.size();
        return nums[r/2];
    }     