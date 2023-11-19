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
    int solve(int begin, int end) {
        int m = begin + (end - begin) / 2;
        if (guess(m) == 0) return m;
        if (guess(m) == -1) return solve(begin, m - 1);
        return solve(m + 1, end);
    }
    int guessNumber(int n) {
        return solve(1, n);
    }
};