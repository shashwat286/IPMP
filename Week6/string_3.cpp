char nonrepeatingCharacter(string S)
    {
        map<char,int> m;
        char c;
       map<char,int>::iterator it;
        int n=S.length();
        for(int i=0;i<n;i++)
        {
            m[S[i]]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
            {
             c=it->first;
             break;
            }
        }
       //Your code here
       return c;
    }