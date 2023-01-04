class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char,char>mp;

        for(int i=0; i<s.size(); i++){
            char c = s[i];
            char d = t[i];
            if(mp.count(c)>0){
                if(mp[c]!=d){
                    return false;
                }
            }else{
                for(auto i: mp){
                    if(i.second==d){
                        return false;
                    }
                }
                mp[c]=d;
            }
           
        }
         return true;
    }
};