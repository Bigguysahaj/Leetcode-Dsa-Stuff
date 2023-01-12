class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>v;

        for(int i=0; i<nums.size(); i++){
            auto it = mp.find(target - nums[i]);
            if(it != mp.end()){
                v.push_back(it->second+1);
                v.push_back(i+1);
                return v;
            }else{
                mp[nums[i]]= i;
            }
        }
        return v;
    }
};