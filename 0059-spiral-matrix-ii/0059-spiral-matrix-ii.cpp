class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<pair<int,int>> directions
        {
            make_pair(0,1),
            make_pair(1,0),
            make_pair(0,-1),
            make_pair(-1,0)
        };

        int num = 1;
        int cd=0;
        int x=0,y=0;
        vector<vector<int>>nums(n,vector<int>(n,0));
        nums[0][0]=num;
        for(int i=0; i<n*n-1;i++){
            for(int j=0; j<4; j++){
                pair<int,int> d = directions[cd];
                int newX = x + d.first, newY = y + d.second;
                if((0<=newX && newX<n) && (0<=newY && newY<n) && !(nums[newX][newY])){
                    nums[newX][newY]=++num;
                    x = newX;
                    y = newY;
                    break;
                }
                cd = (cd+1)%4;
            }
        }
        return nums;
    }
};