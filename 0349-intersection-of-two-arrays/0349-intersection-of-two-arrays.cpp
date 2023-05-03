class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(auto i:nums1){
            mp[i]++;
        }
        vector<int>v;
        for(auto j: nums2){
            if(mp.find(j)!=mp.end()){
                v.push_back(j);
                mp.erase(j);
            }
        }

        return v;
    }
};