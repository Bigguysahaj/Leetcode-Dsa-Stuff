class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>rows;
        set<int>cols;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for(auto row: rows){
            for(int i=0; i<matrix[row].size(); i++){
                matrix[row][i] =0;
            }
        }

        for(auto col: cols){
            for(int i=0; i<matrix.size(); i++){
                matrix[i][col] =0;
            }
        }
    }
};