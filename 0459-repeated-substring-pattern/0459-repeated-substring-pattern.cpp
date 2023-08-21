class Solution {
public:

    bool repeatedSubstringPattern(string s) {
        int len = s.length();

        for( int i=len/2 ; i>=1; i-- ){
            if(len%i==0){
                int rep = len/i;
                string k = "";
                for(int j =0; j<i; j++){
                    k += s[j];
                }
                cout<<k<<endl;
               string jk = "";
                for(int j=0; j<rep; j++){
                    jk += k;
                }

                if(jk == s){
                    return true;
                }
            }


        }
        return false;
    }
};