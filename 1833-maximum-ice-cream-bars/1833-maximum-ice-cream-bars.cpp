class Solution {
public:
    long long maxIceCream(vector<int>& costs, long long coins) {
        sort(costs.begin(), costs.end());
        long long i=0;
        while(coins>0 && i<costs.size()){
            coins -= costs[i];
            
            cout<<coins<<endl;
            if(coins <0 ){
                break;
            }i++;
            
        }
        return i;
    }
};