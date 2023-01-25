class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0;
        int r = 1;
        int maxp = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profit = prices[r]-prices[l];
                maxp = max(profit,maxp);
            }else{
                l = r;
            }
            r+=1;
        }
        return maxp;
    }
};