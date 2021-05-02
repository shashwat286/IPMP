	int  minimum_difference(vector<int>nums){
   	  int n=nums.size();
 	sort(nums.begin(),nums.end());
 	int min=INT_MAX;
 	for(int i=0;i<n-1;i++)
 	{
 	    if(nums[i+1]-nums[i]<min)
 	    {
 	        min=nums[i+1]-nums[i];
 	    }
 	}
 	return min;
   	}    