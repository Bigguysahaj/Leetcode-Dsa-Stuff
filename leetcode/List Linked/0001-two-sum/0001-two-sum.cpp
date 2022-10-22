class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            auto it = hashmap.find(target-nums[i]);
            if (it != hashmap.end()){
                ans[0] = it->second;//secpnd part of the set in hash map iterator (x,y), y
                ans[1] = i;//intiatlizing answer set
                break;
            }
            else{
                hashmap[nums[i]] = i;
            }
        }
        return ans;
    }
};