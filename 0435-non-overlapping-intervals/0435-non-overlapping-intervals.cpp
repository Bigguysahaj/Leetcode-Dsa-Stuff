class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        long long overlap =-1;
        sort(intervals.begin(),intervals.end(), [](const auto& a, const auto& b) {
                    return a[1] < b[1];
                });
        
        long long rightX = intervals.empty() ? INT_MIN : intervals[0][1];
        
        for(auto &nums: intervals ){
            if (nums[0]<rightX){
                ++overlap;
                // rightX = min(rightX, (long long)nums[1]);
            }else{
                rightX = nums[1];
                
            }
        }

        return overlap;
    }
};