 int findMaxDiff(int A[], int n)
    {
      int diff=A[1]-A[0];
      int min=A[0];
      for(int i=0;i<n;i++){
          if(A[i]-min>diff)
          diff=A[i]-min;
          if(A[i]<min)
          min=A[i];
      }
      return diff;
    }