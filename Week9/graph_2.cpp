class Solution 
{
    public:
	
	vector<int> vertex;
	void DFS(int v,bool visited[],vector<int> adj[])
{
    visited[v] = true;
     vertex.push_back(v);
    vector<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i,visited,adj);
}
 
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    	bool visited[V];
	      DFS(0,visited,adj);
	      for(int i=1;i<V;i++)
	      {
	          if(visited[i]==false)
	           DFS(i,visited,adj);
	      }
	      return vertex;
	}