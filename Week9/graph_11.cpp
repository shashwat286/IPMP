class Edge
{
public:
	int src, dest;
};

class Graph
{
public:

	int V, E;
	Edge* edge;
};

Graph* createGraph(int V, int E)
{
	Graph* graph = new Graph();
	graph->V = V;
	graph->E = E;

	graph->edge = new Edge[graph->E * sizeof(Edge)];

	return graph;
}

int find(int parent[], int i)
{
	if (parent[i] == -1)
		return i;
	return find(parent, parent[i]);
}

void Union(int parent[], int x, int y)
{
	parent[x] = y;
}

bool isCycle(Graph* graph)
{
	int* parent = new int[graph->V * sizeof(int)];

	memset(parent, -1, sizeof(int) * graph->V);

	for (int i = 0; i < graph->E; ++i) {
		int x = find(parent, graph->edge[i].src);
		int y = find(parent, graph->edge[i].dest);

		if (x == y)
			return true;

		Union(parent, x, y);
	}
	return false;
}