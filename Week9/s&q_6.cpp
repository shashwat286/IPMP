bool isValid(string s) {
        int n=s.length();
        stack<char> S;
        bool b=true;
        for(int i=0;i<n;i++)
        {
            if(S.empty()&&(s[i]==')'||s[i]=='}'||s[i]==']'))
            {
                 b=false;
                break;
            }
            else if((s[i]=='('||s[i]=='{'||s[i]=='['))
                S.push(s[i]);
            else if(!S.empty()&&(s[i]==')'||s[i]=='}'||s[i]==']'))
            {
                char c=S.top();
                if(c=='['&&s[i]==']'||c=='('&&s[i]==')'||c=='{'&&s[i]=='}')
                {
                    S.pop();
                }
                else if((c=='['&&s[i]!=']')||(c=='('&&s[i]!=')')||(c=='{'&&s[i]!='}'))
                {
                     b=false;
                    break;
            }
            }
        }
        if(!S.empty())
            b=false;
        return b;
    }