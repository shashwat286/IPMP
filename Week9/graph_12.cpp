
class Edge {
	public:
	int src, dest;
};

class Graph {
	public:
	int V, E;
     Edge* edge;
};

class subset {
	public:
	int parent;
	int rank;
};

 Graph* createGraph(int V, int E)
{
	 Graph* graph=new Graph();
	graph->V = V;
	graph->E = E;

	graph->edge = new Edge[edge->E*sizeof(Edge)];

	return graph;
}


int find(subset subsets[], int i)
{
	
	if (subsets[i].parent != i)
		subsets[i].parent
			= find(subsets, subsets[i].parent);

	return subsets[i].parent;
}

void Union(subset subsets[], int xroot, int yroot)
{

	if (subsets[xroot].rank < subsets[yroot].rank)
		subsets[xroot].parent = yroot;
	else if (subsets[xroot].rank > subsets[yroot].rank)
		subsets[yroot].parent = xroot;
	else {
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

bool isCycle(struct Graph* graph)
{
	int V = graph->V;
	int E = graph->E;
	 subset* subsets=new subset[graph->V*sizeof(subset)];

	for (int v = 0; v < V; ++v) {
		subsets[v].parent = v;
		subsets[v].rank = 0;
	}
	for (int e = 0; e < E; ++e) {
		int x = find(subsets, graph->edge[e].src);
		int y = find(subsets, graph->edge[e].dest);

		if (x == y)
			return true;

		Union(subsets, x, y);
	}
	return false;
}
