class Edge {
public:
	int src, dest, weight;
};

class Graph {
public:
	
	int V, E;
    Edge* edge;
};


Graph* createGraph(int V, int E)
{
	Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;

	graph->edge = new Edge[E];

	return graph;
}

class subset {
public:
	int parent;
	int rank;
};

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

 bool comparator(Edge i1,Edge i2)
 {
   return(i1.weight<i2.weight);
 }

int KruskalMST(Graph* graph)
{
	int V = graph->V;
	Edge result[V]; 
	int e = 0; 
	int i = 0; 

	sort(graph->edge,graph->edge+graph->E,comparator);

	subset* subsets = new subset[(V * sizeof(subset))];

	for (int v = 0; v < V; ++v)
	{
		subsets[v].parent = v;
		subsets[v].rank = 0;
	}

	while (e < V - 1 && i < graph->E)
	{

		Edge next_edge = graph->edge[i++];

		int x = find(subsets, next_edge.src);
		int y = find(subsets, next_edge.dest);
		if (x != y) {
			result[e++] = next_edge;
			Union(subsets, x, y);
		}
	}

	int minimumCost = 0;
	for (i = 0; i < e; ++i)
	{
		cout << result[i].src << " -- " << result[i].dest
			<< " == " << result[i].weight << endl;
		minimumCost = minimumCost + result[i].weight;
	}
	 return minimumCost;
	
}
