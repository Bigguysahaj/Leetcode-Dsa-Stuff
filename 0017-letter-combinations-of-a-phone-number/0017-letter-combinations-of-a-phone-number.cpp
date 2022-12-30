class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits== ""){
            vector<string>v;
            return v;
        }
        return pad(digits, "");
    }

    vector<string> pad(string up, string p){
        // base case
        if(up == ""){
            vector<string> vec;
            vec.push_back(p);
            return vec;
        }

    
        int dig = up[0] - '1';
        // this is one less than the no. shown, for eg: dig "2" is 1
        char ch;
        vector<string>vec;

        for(int i = 3*(dig-1); (dig== 7-1 || dig == 9-1)?(i<=dig*3):(i<dig*3); i++){
            if(dig<7){
                // because 7 has 4 digits, and it sets the order off after that
                ch = (char)('a'+ i);
            }else{
                ch = (char)('b' + i);
            }
            
            // all the vectors from the base case added together here
            vector<string>tec = pad(up.substr(1), p + ch);
            vec.insert(vec.end(), tec.begin(),tec.end());
        }

        return vec;
    }
};