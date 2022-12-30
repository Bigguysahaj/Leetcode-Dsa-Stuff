class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        // if(k==1){

        // }

        priority_queue<int, vector<int>>pq(piles.begin(), piles.end());
        long long int sum =0;

        return helper(pq, k, sum);
    }

    int helper(priority_queue<int, vector<int>>& pq, int k, long long int sum){
        if(k==0 || pq.top()<2){
            // Accumulate the elements in the priority heap to get the final sum
            // or while(pq.empty()==0)
            while (!pq.empty()) {
                sum += pq.top();
                pq.pop();
            }
            
            return sum;
            
        }
        // Get the top element of the priority heap
        int top = pq.top();
        pq.pop();
        
        
        // do the operation
        top = ceil((float)top/2);

        // add the new elem to the heap
        pq.push(top);

        return helper(pq,k-1, sum);
    }
};