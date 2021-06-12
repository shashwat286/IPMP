 string removeDuplicates(string s) {
        int n=s.length();
        int i=0;
        while(i<n-1)
        {
            if(s[i]==s[i+1]&i!=0)
            {
                s.erase(i,2);
                i--;
            }
            else if(s[i]==s[i+1]&&i==0)
            {
                s.erase(i,2);
            }
            else
                i++;
        }
        return s;
    }