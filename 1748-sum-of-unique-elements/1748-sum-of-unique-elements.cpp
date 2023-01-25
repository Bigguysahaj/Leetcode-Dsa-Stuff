class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        for(auto i: nums){
            if(mp.find(i)!=mp.end()){
                if(mp[i]>0){
                sum-=i;
                mp[i]=-1;
                }
            }else{
                sum+= i;
                mp[i]=1;

            }
        }
        return sum;
    }
};