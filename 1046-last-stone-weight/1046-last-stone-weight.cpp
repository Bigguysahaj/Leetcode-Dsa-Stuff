class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(auto i: stones){
            pq.push(i);
        }

        while(pq.size()>1){
            int k=pq.top();
            pq.pop();
            int n=pq.top();
            pq.pop();

            pq.push(abs(k-n));
        }
        return pq.top();
    }
};