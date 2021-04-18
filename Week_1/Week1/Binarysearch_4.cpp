int findUnsortedSubarray(vector<int>& nums) {
        int a,b;
        int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i+1]<nums[i])
        {
            a=i;
            break;
        }
    }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<nums[i-1])
            {
                b=i;
                break;
            }
        }
        int max=nums[a];
        int min=nums[a];
        for(int i=a+1;i<=b;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
            if(nums[i]<min)
            {
                min=nums[i];
            }
        }
        for(int i=0;i<a;i++)
        {
            if(nums[i]>min)
            {
                a=i;
                break;
            }
        }
        for(int i=n-1;i>=b+1;i--)
        {
            if(nums[i]<max)
            {
                b=i;
                break;
            }
        }
        return b-a+1;
    }
    