class Solution {
public:
    
    
    int solve(vector<int>&A,int i,vector<int>&dp){
        if(i>=A.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int a = A[i] + solve(A,i+2,dp);
        int b = solve(A,i+1,dp);
        return dp[i]=max(a,b);

    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
};
// class Solution {
// public:
    
//     int solve(vector<int> &nums, int ind,vector<int> &dp)
//     {
//         if(ind >= nums.size()) return 0;
//         if(dp[ind] != -1) return dp[ind];
//         int pick = nums[ind] + solve(nums,ind+2,dp);
//         int notPick = solve(nums,ind+1,dp);
//         return dp[ind] = max(pick,notPick);
//     }
//     int rob(vector<int>& nums) {
//         vector<int> dp(nums.size(),-1);
//         return solve(nums,0,dp);
//     }
// };