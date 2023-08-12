class Solution {
public:

    int M,N;
    int dp[117][117];
    int path (int x=0, int y=0){

        if(dp[x][y] != -1){
            return dp[x][y];
        }

        if(x>=M || y>=N){
            return 0;
        }

        if(x== M-1 && y == N-1){
            return 1;
        }

        return dp[x][y] = path(x+1,y) + path(x, y+1);
    }

    int uniquePaths(int m, int n) {
        M = m;
        N = n;
        memset(dp, -1, sizeof(dp));
        return path();
    }
};