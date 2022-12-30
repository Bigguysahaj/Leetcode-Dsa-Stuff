class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int>cumnums,res;
        int sum=0,count=0;
        int j=0;
        for(auto &i: nums){
            sum+=i;
            cumnums.push_back(sum);
            cout<<sum<<endl;
            }

        for(auto &i: queries){
            int k = binsearch(cumnums,i,0, cumnums.size()-1);
            res.push_back(k);
            
        }
        return res;
    }

    int binsearch(vector<int>nums, int target, int low, int high){
        int mid = low + (high-low)/2;
        if(low>high){
            return mid;
        }

        if(nums[mid]<=target){
            return binsearch(nums, target, mid+1, high);
        }
        return binsearch(nums, target, low, mid-1);
    }
};