    bool bfsOfGraph(int V, vector<int> adj[],int s,int d)
	{
	        if(s==d)
			return true;
	       queue<int> q;
	      bool visited[V];
	       for(int i=0;i<V;i++)
	       visited[i]=false;
	       visited[s]=true;
	       q.push(s);
	       vector<int>::iterator it;
	       while(!q.empty())
	       {
	           int top=q.front();
	           q.pop();
	           for(it=adj[top].begin();it!=adj[top].end();it++)
	           {
			        if(*it==d)
					return true;
	               if(!visited[*it])
	               {
	                   visited[*it]=true;
	                   q.push(*it);
	               }
	           }
	       }
	       return false;
	}