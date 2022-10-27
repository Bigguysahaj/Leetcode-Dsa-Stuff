class Solution {
public:
    int arrangeCoins(long long int n) {
        long long int start = 1;
        long long int end = n+1;
        long long int mid,tot;
        while(start<=end){
            mid = start + (end-start)/2;
            long long sum = (mid*(mid+1))/2;
            
            
            if (sum == n){
                return mid;
            }
            else if (sum>n){
                end = mid-1;
            }else{
                start = mid+1;
                tot = mid;
            }
        }
        
        return tot;
    }
};