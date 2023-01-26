class Solution {
public:
    
    int reverseDigits(int num)
    {
        // converting number to string
        string str = to_string(num);
        reverse(str.begin(), str.end());
        num = stoi(str);
        return num;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int>mp;

        int c=0;
        for(auto &i: nums){
            int k = reverseDigits(i);
            mp[i] = 1;
            i = k;
        }
        for(auto &i: nums){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
            }else{
                mp[i]=1;
            }
        }



        // set<int>s (nums.begin(),nums.end());
        // for(auto &i: s){
        //     if(mp.find(i)!=mp.end()){
        //         c-=2;
        //     }else{
        //         c--;
        //     }
        // }
        for(auto i:mp){
            c++;
        }

        return c;
        
    }
};