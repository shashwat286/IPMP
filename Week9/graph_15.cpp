void fillStack(int v, bool visited[], stack<int> &s,vector<int> adj[])
{
    visited[v] = true;
    vector<int>::iterator it;
    for(it= adj[v].begin(); it!= adj[v].end(); ++it)
        if(!visited[*it])
            fillStack(*it, visited, s,adj);
         s.push(v);
}
void reverseGraph(vector<int> adj[],vector<int> reverse[],int V)
{
    for (int v = 0; v < V; v++)
    {
        
        vector<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            reverse[*i].push_back(v);
        }
    }
}
void DFSUtil(int v, bool visited[],vector<int> reverse[])
{
    
    visited[v] = true;
    vector<int>::iterator i;
    for (i = reverse[v].begin(); i != reverse[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited,reverse);
}
    int kosaraju(int V, vector<int> adj[])
    {
        int count=0;
      stack<int> s;
      vector<int> reverse[V];
     bool visited[V]={false}; 
      for(int i = 0; i < V; i++)
        if(visited[i] == false)
            fillStack(i, visited, s,adj);
          reverseGraph(adj,reverse,V);
          for(int i = 0; i < V; i++)
        visited[i] = false;
    while (s.empty() == false)
    {
        int v = s.top();
        s.pop();
        if (visited[v] == false)
        {
            count++;
            DFSUtil(v, visited,reverse);
        }
    }
    return count;
    }