vector <int> calculateSpan(int price[], int n)
    {
           stack<int> s;
           vector<int> v(n,1);
            v[0]=1;
            s.push(0);
           for(int i=1;i<n;i++)
           {
               while(!s.empty()&&price[s.top()]<=price[i])
                s.pop();
                v[i]=(s.empty())?(i+1):(i-s.top());
                s.push(i);
           }
           return v;
    }