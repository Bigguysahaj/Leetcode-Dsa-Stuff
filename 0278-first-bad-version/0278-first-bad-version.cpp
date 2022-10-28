// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
       
        long long lo=1,hi = n;
        long long int mid;
        
        
        while(lo<=hi){
            mid = (lo+hi)/2;
            
            if (isBadVersion(mid)== false){
                lo = mid+1;
            }else if (isBadVersion(mid) == true){
                hi=mid-1;
            }
        }
        
        //  if (isBadVersion(mid) == false && isBadVersion(n)==true){
        //     return n;
        // }
        return lo;
    }
};