/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        long long int hi = n;
        long long int lo = 0, mid;
        
        while(lo<=hi){
            mid = (lo+hi)/2;
            
            if (guess(mid) == 0){
                return mid;
            }
            
            if (guess(mid) < 0){
                hi = mid-1;
            }
            if(guess(mid) > 0){
                lo = mid +1;
            }
        }
        return mid;
    }
};