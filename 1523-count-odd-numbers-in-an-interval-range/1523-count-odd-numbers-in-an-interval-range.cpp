class Solution {
public:
    int countOdds(int low, int high) {
        int diff = (high -low)/2;
        if(low%2 || high%2)diff++;
        return diff;
    }
};