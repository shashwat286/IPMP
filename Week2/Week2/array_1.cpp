vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> inter;
        std::vector<int>::iterator it;
        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
			{ 
                int find=nums1[i];
                it = std::find (inter.begin(), inter.end(), find);
                if(it!=inter.end())
                    i++;
                else
                {
                    inter.push_back(nums1[i]);
                  i++;
                }
			}
            else if(nums1[i]>nums2[j])
			{
				int find=nums2[j];
                it = std::find (inter.begin(), inter.end(), find);
                if(it!=inter.end())
                    j++;
                else
                {
                    inter.push_back(nums2[j]);
                  j++;
                }
			}
            else
            {
                int find=nums1[i];
                it = std::find (inter.begin(), inter.end(), find);
    if (it != inter.end())
    {
                i++;
                j++;
    }
          else{
               inter.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        }
        return inter;
    }
};
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> inter;
        std::vector<int>::iterator it;
        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
                i++;
            else if(nums1[i]>nums2[j])
                j++;
            else
            {
                int find=nums1[i];
                it = std::find (inter.begin(), inter.end(), find);
    if (it != inter.end())
    {
                i++;
                j++;
    }
          else{
               inter.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        }
        return inter;
    }
};