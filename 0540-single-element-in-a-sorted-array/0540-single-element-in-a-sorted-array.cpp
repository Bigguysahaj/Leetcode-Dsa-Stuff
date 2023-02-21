class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int ans = nums[0];
        recur(nums, 0, ans);
        return ans;

    }

    void recur(vector<int>& nums, int lo, int &ans){
        if(lo+1>=nums.size()){
            return;
        }
        if(nums[lo]==nums[lo+1]){
            lo+=2;
            ans =nums[lo];
            recur(nums, lo, ans);
        }
    }
};