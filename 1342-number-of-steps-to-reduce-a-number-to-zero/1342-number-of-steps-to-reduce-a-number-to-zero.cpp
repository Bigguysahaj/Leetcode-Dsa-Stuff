class Solution {
public:
    long long int numberOfSteps(long long int num) {
        return helper(num, 0);
    }

    long long int helper(long long int num, long long int steps){
        if(num==0){
            return steps;
        }
        steps++;
        (num%2)?num--:num/=2;
        return helper(num, steps);
    }
};