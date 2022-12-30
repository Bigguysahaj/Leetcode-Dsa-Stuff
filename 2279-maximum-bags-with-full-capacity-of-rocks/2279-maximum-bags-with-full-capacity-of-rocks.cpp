class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0,sum=0;;
        vector<int>res(capacity.size());
        for(int i =0; i<capacity.size(); i++){
            res[i] = capacity[i] - rocks[i];
        }
        sort(res.begin(), res.end());
        for(auto &i: res){
            cout<<i<<endl;
            sum += i;
            if(sum <=additionalRocks){
                
                count++;
            }else{
                return count;
            }
        }

        return count;
    }
};