#include <cctype>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        bool is_palindrome = true;
        while (i < j && is_palindrome) {
            while (!isalnum(s[i]) && i < j) i++;
            while (!isalnum(s[j]) && i < j) j--;
            if (tolower(s[i]) == tolower(s[j])) {
                i++;
                j--;
            }
            else is_palindrome = false;
        }
        return is_palindrome;
    }
};