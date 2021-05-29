void permutation(string S,vector<string>&v,int l,int r)
	    {
	        if(l==r)
	        v.push_back(S);
	        else
	        {
	            for(int i=l;i<=r;i++)
	            {
	                swap(S[l],S[i]);
	                permutation(S,v,l+1,r);
	                swap(S[l],S[i]);
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		      vector<string> v;
		      int n=S.length();
		      sort(S.begin(),S.end());
		      permutation(S,v,0,n-1);
		      sort(v.begin(),v.end());
		      return v;
		    // Code here there
		}