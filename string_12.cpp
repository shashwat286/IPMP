  string removeChars(string string1, string string2) {
    map<char,int> m;
        for(int i=0;i<string2.length();i++)
        {
            m[string2[i]]++;
        }
        int j=0;
        while(j<=string1.length()-1)
        {
            if(m[string1[j]]!=0)
            {
                string1.erase(j,1);
            }
            else
            {
                j++;
            }
        }
        return string1;
    }