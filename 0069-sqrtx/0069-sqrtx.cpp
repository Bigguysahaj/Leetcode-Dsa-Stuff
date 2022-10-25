class Solution {
public:
    int mySqrt(int x) {
        
        if (x==0 || x ==1){
            return x;
        }
        
        long long int lo = 1, hi = x-1, mid;
        while(lo <= hi){
            mid = (lo+hi)/2;
            (mid*mid < x)?lo = mid +1:hi = mid-1;
        }
        if (lo*lo <= x){
            return lo;
        }else
        return hi;
    }
};