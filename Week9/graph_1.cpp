vector<vector<int>>printGraph(int V, vector<int> adj[])
	{
	   vector<vector<int>> v;
	   vector<int> a;
	   for(int i=0;i<V;i++)
	   {
	        a=adj[i];
	        a.insert(a.begin(),i);
	       v.push_back(a);
	   }
	   return v;
	}