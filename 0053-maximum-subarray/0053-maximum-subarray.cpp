class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kardane's algorithm, stops caring once the value goes negative, and changed to 0 (as if new subarray has started)
        int currSum = 0;
        int maxSub = INT_MIN;
        for(auto &i:nums){
            currSum += i;
            if(currSum>maxSub){
                maxSub = currSum;
            }
            if(currSum<0){
                currSum =0;
            }
        }
        return maxSub;
    }
};