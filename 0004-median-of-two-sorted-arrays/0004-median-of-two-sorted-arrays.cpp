class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums3, vector<int>& nums2) {
        
        vector<int>nums1(nums3.size()+nums2.size());
        // merge sort here
        merge(nums3.begin(), nums3.end(), nums2.begin(), nums2.end(), nums1.begin());
        if(nums1.size()%2){
            return (double)nums1[nums1.size()/2];
        }
        return ((double)nums1[nums1.size()/2-1] + (double)nums1[nums1.size()/2])/2.0;

    }
};