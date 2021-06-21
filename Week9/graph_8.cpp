	void floydWarshall(vector<vector<int>>&matrix){
	   int V=matrix.size();
        int  i, j, k;
    for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
		for (j = 0; j < V; j++) {
		            if((matrix[i][k]!=-1&&matrix[k][j]!=-1))
		            {
		                if(matrix[i][j]!=-1)
					    matrix[i][j] = min(matrix[i][j],(matrix[i][k] + matrix[k][j]));
					    else
					     matrix[i][j]=matrix[i][k] + matrix[k][j];
		            }
			}
		}
	}
}