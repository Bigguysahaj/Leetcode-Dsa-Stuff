class Solution {
public:
    
    int helper(vector<int>&cookies, vector<int>&v, int k, int c, int index, int used, vector<vector<int>>&cache){
        if (index ==k){
            if (used == (1<<c)-1){
                return 0;
            }
            return INT_MAX;
        }

        if (cache[index][used] != -1) {
            return cache[index][used];
        }


        int best = helper(cookies, v, k, c, index + 1,used, cache );
        
        for(int mask=1; mask<(1<< c); mask++){
            if ((mask & used) == 0){
                best = min(best, max(helper(cookies, v, k, c, index +1, used | mask, cache), v[mask]));
            }
        }
        cache[index][used] = best;

        return best;
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        
        int c = cookies.size();
        vector<int>v;
        v.assign((1<<c), 0);

        for(int i=0; i<v.size(); i++ ){
            v[i]=0;
            for (int j=0; j<c; j++){
                if((i & (1 << j))> 0 ){
                    v[i]+=cookies[j];
                }
            }
        }

        // index --> 0 to k
        // used -->0 to 2^c
        
        // for(auto i: v){
        //     cout<<i<<" ";
        // }
        vector<vector<int>> cache(k + 1, vector<int>(1 << c, -1));
        return helper(cookies, v, k, c, 0, 0,cache);
    }
};