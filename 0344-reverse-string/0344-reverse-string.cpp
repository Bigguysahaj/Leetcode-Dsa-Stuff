class Solution {
public:

void helper(vector<char>& s, int i){

        if(i>=s.size()/2){
            return;
        }

        swap(s[i],s[s.size()-1-i]);
        return helper(s,i+1);

    }

    void reverseString(vector<char>& s) {
        helper(s,0);
    }
};