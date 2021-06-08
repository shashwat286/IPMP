int smallerRight(string S,int left,int right)
    {
        int right_no=0;
        for(int i=left+1;i<=right;i++)
        {
            if(S[left]>S[i])
            right_no++;
        }
        return right_no;
    }
    int factorial(int len)
    {
        if(len<=1)
        return 1;
        return(len*factorial(len-1));
    }
    int rank(string S){
    int len=S.length();
    int fact=factorial(len);
      int rank=1;
      int s_right;
      for(int i=0;i<len;i++)
      {
          fact/=len-i;
          s_right=smallerRight(S,i,len-1);
          rank=rank+(fact*s_right);
      }
      return rank;
    }