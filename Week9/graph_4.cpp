	bool dfs(int v,bool visited[],bool explored[],vector<int> adj[])
	{
	          visited[v]=true;
	          explored[v]=true;
	          vector<int>::iterator it;
	          for(it=adj[v].begin();it!=adj[v].end();it++)
	          {
	                if(!visited[*it]&&dfs(*it,visited,explored,adj))
	                return true;
	                else if(explored[*it])
	                 return true;
	          }
	          explored[v]=false;
	          return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	 bool visited[V]={false};
	   	 bool explored[V]={false};
	   	 for(int i=0;i<V;i++)
	   	 {
	   	     if(dfs(i,visited,explored,adj))
	   	        return true;
	   	 }
	   	 return false;
	}