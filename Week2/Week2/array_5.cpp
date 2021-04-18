vector<int> twoOddNum(int Arr[], int N)  
    {
        vector<int> v;
        int b;
        for(int i=0;i<N;i++)
        {
            b=b^Arr[i];
        }
        int set_bit=b&~(b-1);
        int x,y;
        x=0;
        y=0;
        for(int i=0;i<n;i++)
        {
        
            if(Arr[i]&set_bit)
            {
                x=x^Arr[i];
            }
            else
            y=y^Arr[i];
        }
        v.push_back(x);
        v.push_back(y);
        return v;
    }