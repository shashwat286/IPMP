bool find3Numbers(int A[], int n, int X)
    {
        //Yfor(int i=0;i<n-2;i++)
         for(int i=0;i<n-2;i++)
    {
        unordered_set<int> s;
        int a=X-A[i];
        for(int j=i+1;j<n;j++)
        {
            int b=a-A[j];
            if(s.find(b)!=s.end())
            {//array A[] which sums up to X.
   
                return true;
            }
            s.insert(A[j]);
        }
    }
    return false;
}