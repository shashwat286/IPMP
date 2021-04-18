void merge(vector<int>&nums,int l,int m,int r)
    {
        int a=m-l+1;
        int b=r-m;
        vector<int> x;
        vector<int> y;
        for(int i=0;i<a;i++)
            x.push_back(nums[l+i]);
        for(int j=0;j<b;j++)
            y.push_back(nums[m+1+j]);
        int i=0;
        int j=0;
        int k=l;
        while(i<a&&j<b)
        {
            if(x[i]<=y[j])
            {
                nums[k]=x[i];
                i++;
            }
            else
            {
                nums[k]=y[j];
                j++;
            }
            k++;
        }
        while(i<a)
        {
            nums[k]=x[i];
            i++;
            k++;
        }
        while(j<b)
        {
            nums[k]=y[j];
            j++;
            k++;
        }
    }
     void mergesort(vector<int>& nums,int l,int r)
     {
         if(l>=r)
         return;
         int m=(l+r)/2;
         mergesort(nums,l,m);
         mergesort(nums,m+1,r);
         merge(nums,l,m,r);
     }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }