vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	       queue<int> q;
	      bool visited[V];
	       vector<int> v;
	       for(int i=0;i<V;i++)
	       visited[i]=false;
	       visited[0]=true;
	       q.push(0);
	       v.push_back(0);
	       vector<int>::iterator it;
	       while(!q.empty())
	       {
	           int top=q.front();
	           q.pop();
	           for(it=adj[top].begin();it!=adj[top].end();it++)
	           {
	               if(!visited[*it])
	               {
	                   visited[*it]=true;
	                   q.push(*it);
	                   v.push_back(*it);
	               }
	           }
	       }
	       return v;
	}