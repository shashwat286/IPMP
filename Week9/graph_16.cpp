class Edge
{
	int v;
	int weight;
public:
	Edge(int _v, int _w) { v = _v; weight = _w;}
	int getV()	 { return v; }
	int getWeight() { return weight; }
};
class Graph
{
	int V;
	vector<Edge> *adj;
public:
	Graph(int V)
    {
      this->V = V;
	adj = new vector<Edge>[V];
    }
	void addEdge(int u, int v, int weight)
    {
      Edge edge(v, weight);
	adj[u].push_back(edge);
    }
  void topologicalSort(int v, bool visited[], stack<int> &s);
    void shortestPath(int s);
};


void Graph::topologicalSort(int v, bool visited[], stack<int> &s)
{
	visited[v] = true;
	vector<Edge>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		Edge edge = *i;
		if (!visited[edge.getV()])
			topologicalSort(edge.getV(), visited, s);
	}
	s.push(v);
}

void Graph::shortestPath(int src)
{
	stack<int> s;
	int dist[V];
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;
	for (int i = 0; i < V; i++)
		if (visited[i] == false)
			topologicalSort(i, visited, s);
	for (int i = 0; i < V; i++)
		dist[i] = INF;
	dist[src] = 0;

	while (s.empty() == false)
	{

		int u = s.top();
		s.pop();
		vector<Edge>::iterator i;
		if (dist[u] != INF)
		{
		for (i = adj[u].begin(); i != adj[u].end(); ++i)
			if (dist[i->getV()] > dist[u] + i->getWeight())
				dist[i->getV()] = dist[u] + i->getWeight();
		}
	}
	for (int i = 0; i < V; i++)
		(dist[i] == INF)? cout << "INF ": cout << dist[i] << " ";
}
