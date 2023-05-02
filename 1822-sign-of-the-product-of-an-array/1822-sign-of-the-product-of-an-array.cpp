class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long sign =1;
        for(auto i: nums){
            if(i==0){return 0;}
            (i>0)?sign*=1:sign*=-1;
        }

        return sign;
    }
};