class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row = matrix.size(), col = matrix[0].size();
    
        vector<vector<int>>used(row, vector<int> (col,0));
        
        vector<pair<int,int>> directions{
            make_pair(0,1),
            make_pair(1,0),
            make_pair(0,-1),
            make_pair(-1,0)
        };

        int x =0, y = 0, cd = 0;
        vector<int>res;
        res.push_back(matrix[0][0]);
        used[0][0]=1;
        
        for(int i=0; i<row*col-1; i++){
            for(int j=0; j<4; j++){
                pair<int,int> d = directions[cd];
                int newX = x + d.first, newY = y + d.second;
                if((0<=newX && newX<row) && (0<=newY && newY<col) && !(used[newX][newY])){
                    res.push_back(matrix[newX][newY]);
                    x = newX;
                    y = newY;
                    used[newX][newY]= 1;
                    break;
                }
                cd = (cd+1)%4;
            }
        }
        return res;

    }
};