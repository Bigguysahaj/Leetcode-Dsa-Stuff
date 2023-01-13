class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for (auto i: stones){
            mp[i]++;
        }
        int sum=0;

        for(auto i: jewels){
            sum+=mp[i];
        }
        return sum;
    }
};