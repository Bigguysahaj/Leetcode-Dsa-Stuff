class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int lo = 1;
        int hi = nums.size()-1;

        int mid =0;
        int count=0;
        
        while(lo<hi-1){

            mid = lo + (hi - lo)/2;

            for (auto a: nums){
                if(a<=mid){
                    count++;
                }
            }

            (count > mid)? hi=mid: lo=mid;
            count=0;
        }

        for (auto a : nums){
            if (a == lo){
                count++;
            }
        }

        if (count>1){
            return lo;
        }
        return hi;
    }
};