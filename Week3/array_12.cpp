 int findDuplicate(vector<int>& nums) {
        map<int,int> m;
    int duplicate;
 for(int i=0;i<nums.size();i++)
{
  m[nums[i]]++;
}
  for(auto itr=m.begin();itr!=m.end();itr++)
{
    if(itr->second>=2)
{
   duplicate=itr->first;
}
}
return duplicate;
    }