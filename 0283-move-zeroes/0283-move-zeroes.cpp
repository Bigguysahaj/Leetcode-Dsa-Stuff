class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1) return;
        int zeros=0;
        int size = nums.size();
        for(int i=0; i<size; i++){
            if(nums.size()==i) break;

            if(!nums[i]){
                nums.erase(nums.begin()+i);
                zeros++;
                i--;
            }
        }

        while(zeros--) nums.push_back(0);
    }
};