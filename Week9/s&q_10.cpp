vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<int> s;
        int i=0;
        vector<long long int> v(n,-1);
        while(i<n)
        {
            if(s.empty()||arr[s.top()]>arr[i])
              s.push(i++);
              else
              {
                  int top=s.top();
                  s.pop();
                  v[top]=arr[i];
              }
        }
        return v;
    }