class Solution {
public:

    int M,N;
    int dp[117][117];
    int path (int x, int y, vector<vector<int>>& grid){

        if(dp[x][y] != -1){
            return dp[x][y];
        }

        if(x>=M || y>=N){
            return 0;
        }

        if(grid[x][y] == 1){
            return 0;
        }

        if(x== M-1 && y == N-1){
            return 1;
        }

        return dp[x][y] = path(x+1,y,grid) + path(x, y+1, grid);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        M = obstacleGrid.size();
        N = obstacleGrid[0].size();
        memset(dp, -1, sizeof(dp));
        return path(0,0,obstacleGrid);
    }
};