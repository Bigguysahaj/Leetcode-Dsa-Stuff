class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        vector<string>ans;
        for(auto i: arr){
            if(mp.find(i)!=mp.end()){
                mp[i] =-1;
            }else{
                mp[i]=1;
            }
        }
        int c=0;
        for(auto j: arr){
            if((mp[j]==1)&& c==k-1){
                return j;
            }
            if(mp[j]==1) c++;
        }
        return "";
    }
};