double average(vector<int>& salary) {
           int n=salary.size();
        int sum=0;
            for(int i=1;i<n;i++)
            {
                int key=salary[i];
                int j=i-1;
                while(j>=0&&salary[j]>key)
                {
                    salary[j+1]=salary[j];
                    j=j-1;
                }
                salary[j+1]=key;
            }
        for(int i=1;i<n-1;i++){
            sum=sum+salary[i];
        }
      double d=(double)sum/(double)(n-2);
        return d;
    }