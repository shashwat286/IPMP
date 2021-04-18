 vector<int> singleNumber(vector<int> nums) 
    {
        int n=nums.size();
        int b=0;
        vector<int> v;
        int x=0;
        int y=0;
        for(int i=0;i<n;i++)
        {
            b=b^nums[i];
        }
        int set_bit=b&~(b-1);
        for(int i=0;i<n;i++)
        {
            if(nums[i]&set_bit)
            {
                x=x^nums[i];
            }
            else
            y=y^nums[i];
        }
        if(x<y)
        {
            v.push_back(x);
            v.push_back(y);
        }
        else
        {
            v.push_back(y);
            v.push_back(x);
        }
        return v;
    }