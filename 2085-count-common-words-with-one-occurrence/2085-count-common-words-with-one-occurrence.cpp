class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp,mp2;
        for(auto i: words1){
            mp[i]++;
        }
        int count=0;
        for(auto j: words2){
            mp2[j]++;
        }
        for( auto it: mp){
            if(mp2.find(it.first)!=mp2.end()){
                if(it.second <=1 && mp2[it.first]<=1) count++;
            }
        }
        return count;
    }
};