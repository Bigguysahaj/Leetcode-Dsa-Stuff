class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
        int n = v.size();
        vector<char> freq(n + 1);
        for (auto &i: v) ++freq[i];
        int dup = -1;
        int miss = -1;
        for (int i = 1; i <= n; ++i) {
            if (freq[i] == 2) {
                dup = i;
            } else if (freq[i] == 0) {
                miss = i;
            }
        }
        return {dup, miss};
        }
};