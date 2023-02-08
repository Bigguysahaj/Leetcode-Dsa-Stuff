class Solution {
public:

    bool unique(string S, int l, int r){
        unordered_map<char,int>mp;
        for(int i=l; i<=r;i++){
            if(mp.find(S[i])!=mp.end()){
                return false;
            }else{
                mp[S[i]];
            }
        }
        return true;
    }
    int lengthOfLongestSubstring(string S) {
        // wow i did it, fuck!!! lessfuckingo
        if(S.size()==1){
            return 1;
        }
        if(S.size()==0){
            return 0;
        }
        int l =0;
        int r = 1,maxp=0;
        while(r<S.size()){
            if(unique(S,l,r)){
                maxp = max(maxp,r-l+1);
                r++;
            }else{
                l++;
            }
        }
        return maxp;

    }
};