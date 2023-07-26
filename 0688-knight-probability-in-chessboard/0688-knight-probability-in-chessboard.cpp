class Solution {
public:

    vector <pair<int,int>> moves ={
        {1,2},{1,-2},{-1,2},{-1,-2},
        {2,1},{2,-1},{-2,1},{-2,-1}
    };

    int R,C,N;

    vector<vector<vector<double>>> memo;
    
    // unordered_map<int,double>
    double p(int x, int y, int k){
        if (k==0){
            if (x==R && y==C){
                return 1.0;
            }else{
                return 0.0;
            }
        }

        if (memo[x][y][k] != -20.0){
            return memo[x][y][k];
        }

        double totalP = 0.0;
        for (auto i: moves){
            double nx = x + i.first;
            double ny = y + i.second;

            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                totalP += p(nx, ny, k-1);
            }
        }
        memo[x][y][k] = totalP/8.0;

        return memo[x][y][k];
        // because 8 possible answers from a cell for knight
    }
    double knightProbability(int n, int k, int row, int column) {
        N = n;
        R = row;
        C = column;
        memo = vector<vector<vector<double>>> (
            N, vector<vector<double>>(
                N, vector<double>(k + 1, -20.0)
            )
        );
        double totalP = 0.0;
        for( int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                totalP += p(i,j,k);
            }
        }
        return totalP;
    }
};


