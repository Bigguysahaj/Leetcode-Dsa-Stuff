class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0;
        int n = nums.size();
        int hi = n-1, mid;
        
        if (nums[n-1]<target){
            return n;
        }else if(nums[0]>target){
            return 0;
        }
        
        while(lo<=hi){
            mid = (lo+hi)/2;
            
            if (nums[mid] <= target){
                lo = mid+1;
            }
            
            if (nums[mid] > target){
                hi = mid-1;
            }
        }
        
        return (nums[hi]>=target)?  hi: lo;
    }
};