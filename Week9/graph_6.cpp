bool isAllowed(vector<vector<char>>& grid,int row,int column,vector<vector<bool>>& visited,int ROW,int COL)
    {
        return((row>=0)&&(row<ROW)&&(column<COL)&&(column>=0)&&((grid[row][column]-'0')&&!visited[row][column]));
    }
    void dfs(vector<vector<char>>& grid,int row,int column,vector<vector<bool>>& visited,int ROW,int COL)
    {
        int rowNumber[]={-1,-1,-1,0,0,1,1,1};
        int colNumber[]={-1,0,1,-1,1,-1,0,1};
        visited[row][column]=true;
        for(int i=0;i<8;i++)
        {
            if(isAllowed(grid,row+rowNumber[i],column+colNumber[i],visited,ROW,COL))
               dfs(grid,row+rowNumber[i],column+colNumber[i],visited,ROW,COL);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int count=0;
         int ROW=grid.size();
         int COL=grid[0].size();
          vector<vector<bool>> visited(ROW,vector<bool>(COL,false));
         for(int i=0;i<ROW;i++)
         {
             for(int j=0;j<COL;j++)
             {
                 if((grid[i][j]-'0')&&!visited[i][j])
                 {
                      dfs(grid,i,j,visited,ROW,COL);
                      count++;
                 }
             }
         }
        return count;
    }