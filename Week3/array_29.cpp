void binSort(int A[], int N)
{
   int l=0;
   int r=N-1;
   while(l<=r)
   {
       if(A[l]==1&&A[r]==0)
       {
           int temp=A[l];
           A[l]=A[r];
           A[r]=temp;
           l++;
           r--;
       }
       if(A[l]==1&&A[r]==1)
       {
           r--;
       }
       if(A[l]==0&&A[r]==1)
       {
           l++;
           r--;
       }
       if(A[l]==0&&A[r]==0)
       l++;
   }
}