class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n = a.size();
        int lo=0, hi=n-1,mid;
        while(lo<=hi){
            mid = (lo+hi+1)/2;
            
            if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
                return mid;
            }else if (a[mid]< a[mid-1]){
                hi = mid-1;
            }else if (a[mid]< a[mid+1]){
                lo= mid+1;
            }
        }
        return mid;
    }
};