 char nonrepeatingCharacter(string S)
    {
        map<char,int> m;
         char c='N';
        int n=S.length();
        for(int i=0;i<n;i++)
        {
            m[S[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[S[i]]==1)
            {
             c=S[i];
             break;
            }
        }
       return c;
    }