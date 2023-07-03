class Solution {
public:

    unordered_map<char, int> counter(const string& s) {
        unordered_map<char, int> countMap;
        for (char c : s)countMap[c]++;
        return countMap;
    }

    bool counterValues(const string& s) {
    unordered_map<char, int> counts = counter(s);
    vector<int> values;

    for (const auto& pair : counts) {
        if(pair.second>=2)
            return true;
    }

    return false;
    }

    bool buddyStrings(string s, string goal) {

        int strike =0;
        for(int i=0; i<s.length(); i++){
            
            if(s[i]!=goal[i]) strike++;
        }

        if(strike>2){
            return false;
        }

        if(strike==1){
            return false;
        }

        if(strike==0){
            return counterValues(s);
        }

        return counter(s) == counter(goal);
    }
};