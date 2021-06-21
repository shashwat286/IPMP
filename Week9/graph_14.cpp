bool dfs(int v,bool visited[],vector<int> adj[],int parent)
    {
        visited[v]=true;
        vector<int>::iterator it;
        for(it=adj[v].begin();it!=adj[v].end();it++)
        {
            if(!visited[*it])
            {
                if(dfs(*it,visited,adj,v))
                return true;
            }
            else if(*it!=parent)
            return true;
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    bool visited[V]={false};
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	         if(dfs(i,visited,adj,-1))
	          return true;
	        }
	    }
	    return false;
	}