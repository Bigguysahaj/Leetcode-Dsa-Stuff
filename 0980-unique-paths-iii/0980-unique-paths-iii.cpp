class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        // dimension of grid and search
        int m = grid.size();
        int n = grid[0].size();

        // Find the starting square and count the number of empty squares
        int startX, startY;
        int EmpSquare = 0;
        for (int i = 0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] ==1){
                    startX = i;
                    startY = j;
                } else if (grid[i][j] == 0){
                    EmpSquare++;
                }
            }
        }
        int numPath =0;
        //  depth first search
        dfs(startX, startY, EmpSquare, grid, numPath);
        return numPath;
    }

    void dfs(int x, int y, int emp,vector<vector<int>>& grid, int& path){
        int m = grid.size();
        int n = grid[0].size();
        // check if we reached ending square 
        if(grid[x][y] ==2){
            // if we have visited all empty square, increment the path
            if (emp == 0) path++;
            return;
        }

        // marking current square visited
        grid[x][y] = -1;

        // going all four direction
        for(int i=-1; i<=1; i+=2){
            int newX = x + i;
            int newY = y;

            // check if new position is withtin the grid, and not an obstacle

            if(newY >=0 && newY<n && newX >=0 && newX <m && (grid[newX][newY] == 0 || grid[newX][newY] == 2)){
                dfs(newX, newY, emp-(grid[newX][newY]==0), grid, path);
            }
            newX = x;
            newY = y +i;

            // check if new position is withtin the grid, and not an obstacle

            if(newY >=0 && newY<n && newX >=0 && newX <m && (grid[newX][newY] == 0 || grid[newX][newY]== 2)){
                dfs(newX, newY, emp-(grid[newX][newY]==0), grid, path);
            }
        }

        // If we have tried all the directions and none of them led to the ending square, backtrack
        grid[x][y] =0;
    }

    
};