class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i: nums){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
                ans.push_back(i);
            }else{
                mp[i] = 1;
            }
        }
        return ans;
    }
};