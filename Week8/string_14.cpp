int lengthOfLongestSubstring(string s) {
        int len=0;
          map<char,int> m;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]=-1;
        }
        for(int i=0;i<s.length();i++)
        {
            j=max(j,m[s[i]]+1);
            len=max(len,i-j+1);
            m[s[i]]=i;
        }
        return len;
    }