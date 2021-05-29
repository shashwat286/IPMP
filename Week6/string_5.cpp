string removeDuplicateLetters(string s) {
        vector<int>count(26,0);
        vector<int>visited(26,0);
        stack<char> a;
        for(int i=0;i<s.length();i++)
            count[s[i]-'a']++;
        for(int i=0;i<s.length();i++)
        {
           
            if(a.empty() || (a.top()<s[i] && visited[s[i]-'a']==0))
            {
                a.push(s[i]);
                visited[s[i]-'a']=1;
            }
            else
            {
               
                if(visited[s[i]-'a']==0)
                {
                   
                    while(!a.empty() && a.top()>s[i] && count[a.top()-'a']>=1)
                    {
                        visited[a.top()-'a']=0;
                        a.pop();
                    }
                    a.push(s[i]);
                    visited[s[i]-'a']=1;
                }
            }
            count[s[i]-'a']--;
        }
        string ans;
        while(!a.empty())
        {
            ans+=a.top();
            a.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }