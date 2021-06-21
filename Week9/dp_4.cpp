int maximumPath(int N, vector<vector<int>> Matrix)
    {
          int dp[N+1][N+1];
          memset(dp,0,sizeof(dp));
          for(int i=0;i<N;i++)
          {
              for(int j=0;j<N;j++)
              {
                  int down=(i==0)?0:dp[i-1][j];
                  int down_left=(i==0||j==N-1)?0:dp[i-1][j+1];
                  int down_right=(i==0||j==0)?0:dp[i-1][j-1];
                  dp[i][j]=Matrix[i][j]+max(down,max(down_left,down_right));
              }
          }
          int maximum=dp[N-1][0];
          for(int i=1;i<N;i++)
          {
              if(dp[N-1][i]>maximum)
              {
                  maximum=dp[N-1][i];
              }
          }
          return maximum;
    }