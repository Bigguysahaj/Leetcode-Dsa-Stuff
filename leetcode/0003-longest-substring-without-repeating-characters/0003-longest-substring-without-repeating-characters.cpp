class Solution {
public:
    int lengthOfLongestSubstring(string S) {
        int b = 0, ans =0;
        map<char,int> mp;
        for(int i = 0; i<S.size(); i++){
//             case 1 this is for if the char has never exsited
            if (mp.count(S[i])==0)
                mp[S[i]] =i;
            else{
//                 case 2 for if has repeated itself
//                 we have to erase the repeating character from the start now, 
//                 and update b(beginning point), which is the point where we have started counting our substring.
                ans = max(ans, i-b);
                while(b<=mp[S[i]]){
                    mp.erase(S[b]);
                    b++;
                }
                mp[S[i]] =i;
                // update map too
                
//                 where i is the current pos of the iterator and b is the starting point of the substring, which is always lower than i
            }
            }//for loop ends here
            
//             case 3: if we end the string without encountring another repeating character, the ans won't be updated by the above code we put forward, for this we need a case 3, which will
//         use the b(begininng point) to find answer
            if ( S.size() -b >ans){
                ans = S.size() -b;    
        }//basically string size minus new substring pos (b) & if the this lenght is more than ans, we updated ans
        return ans;
    }
};