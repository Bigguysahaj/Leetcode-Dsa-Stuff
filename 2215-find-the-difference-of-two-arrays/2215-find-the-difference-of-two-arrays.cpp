class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp,mp2;
        for(auto i: nums1){
            mp[i]++;
        }
        set<int>v;
        for(auto j: nums2){
            mp2[j]++;
            if(!(mp.find(j)!=mp.end())){
                v.insert(j);
                mp.erase(j);
            }
        }
        set<int>v2;
        for(auto i: nums1){
            if(!(mp2.find(i)!=mp2.end())){
                v2.insert(i);
                mp2.erase(i);
            }
        }
        vector<int>v1(v.begin(),v.end());
        vector<int>s(v2.begin(),v2.end());
        return {s,v1};
    }
};