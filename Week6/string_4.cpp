 string reverseWords(string s) {
        vector<string> v;
        string temp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                temp=temp+s[i];
                if(s[i+1]==' '||i==n-1)
                {
                    v.push_back(temp);
                    temp="";
                }
            }
        }
        temp="";
        for(int i=v.size()-1;i>=0;i--)
        {
            temp=temp+v[i];
            if(i!=0)
               temp=temp+' ';
                
        }
        return temp;
        
    }