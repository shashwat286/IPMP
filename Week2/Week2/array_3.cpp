class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum=n*(n+1)/2;
        int sum1=0;
        for(int i=0;i<n-1;i++)
        {
            sum1=sum1+array[i];
        }
        return (sum-sum1);
    }
};