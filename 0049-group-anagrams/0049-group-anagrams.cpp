class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>v;

        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            if(mp.find(strs[i])!=mp.end()){
                mp[strs[i]].push_back(s);
            }else{
                mp[strs[i]].push_back(s);
            }
        }

        auto it = mp.begin();
        while(it != mp.end()){
            v.push_back(it->second);
            it++;
        }
        return v;
    }
};