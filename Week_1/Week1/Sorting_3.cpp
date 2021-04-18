void swap(int *x,int *y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        map<int,char> m;
        for(int x=0;x<n;x++)
        {
            m.insert({indices[x],s[x]});
        }
         for(int i=0;i<n-1;i++)
         {
             int min=i;
             for(int j=i+1;j<n;j++)
             {
                 if(indices[min]>indices[j])
                  min=j;
             }
             swap(&indices[i],&indices[min]);
     }
        for(int i=0;i<n;i++)
        {
            auto itr=m.find(indices[i]);
            s[i]=itr->second;
        }
        return s;
    }