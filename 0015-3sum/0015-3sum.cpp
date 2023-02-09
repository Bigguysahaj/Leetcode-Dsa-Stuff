class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        unordered_map<int,int>mp;
        // sort(nums.begin(), nums.end());

        int zeros = 0;
        for(int i=0; i<nums.size(); i++){
            int sum = 0-nums[i];
            if(nums[i]==0){
                zeros++;
                if(zeros==3){
                    v.push_back({0,0,0});
                }
                continue;
            }
            
            for(int j=0; j<nums.size(); j++){

                auto it = mp.find(sum-nums[j]);
                // cout<<i<<" "<<j<<" "<<endl;
                if(it != mp.end()){
                    if(it->second != j && it->second != i && i!=j){
                        v.push_back({nums[i],nums[j],it->first});
                    }
                }else{
                    mp[nums[i]]=i;
                }
            }
        }
        for(auto &i: v){
            sort(i.begin(),i.end());
        }
        set<vector<int>>s(v.begin(),v.end());
        vector<vector<int>>vc(s.begin(),s.end());
        return vc;
    }
};