class Solution {
public:

    vector<vector<int>>res;
    // vector<bool> used(6, false); (*)

    void dfs(vector<int>& nums, int i =0){
        if(i==nums.size()){
            res.push_back(nums);
        }

        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
            dfs(nums,i+1);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums);
        return res;
    }
};

