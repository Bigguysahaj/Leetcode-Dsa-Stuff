class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {

        if (v.size()<2){
            return v.size();
        }

    sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
        long long RightX = INT_MIN;
        long long arrows = 0;
        for (const auto& balloon : v) {
        if (balloon[0] > RightX) {
            // Shoot a new arrow to burst the balloon
            RightX = balloon[1];
            arrows++;
        } else {
            // Balloon can be burst with an arrow that was shot previously
            RightX = min(RightX, (long long)balloon[1]);
        }
    }

        return arrows;
    }
};