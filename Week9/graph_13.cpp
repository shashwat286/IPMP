void topSort(int v,bool visited[],stack<int>& s,vector<int> adj[])
	{
	    visited[v]=true;
	    vector<int>::iterator it;
	    for(auto it=adj[v].begin();it!=adj[v].end();it++)
	    {
	        if(!visited[*it])
	        topSort(*it,visited,s,adj);
	    }
	    s.push(v);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> v;
	      stack<int> s;
	      bool visited[V]={false};
	      for(int i=0;i<V;i++)
	      {
	          if(!visited[i])
	             topSort(i,visited,s,adj);
	      }
	      while(!s.empty())
	      {
	          int temp=s.top();
	          s.pop();
	          v.push_back(temp);
	      }
	      return v;
	}