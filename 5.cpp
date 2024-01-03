#include<iostream>
#include<string>
using namespace std;

class Solution {
private:
    // string recursive(string s, int left, int right) {
    //     if (right < left) return "";
    //     if (s[left] == s[right])  {
    //         if (left == right) 
    //             return s[left] + "";
    //         return s[left] + 
    //                 recursive(s, left + 1, right - 1) + 
    //                 s[right];
    //     }
    //     string leftSize = recursive(s, left + 1, right),
    //         rightSide = recursive(s, left, right - 1);
    //     if (leftSize.size() > rightSide.size()) 
    //         return leftSize;
    //     return rightSide;
    // }
public:
    string longestPalindrome(string s) {
        string res = "";
        int size = s.length();
        for (int i = 0; i < size; ++i) {
            // * odd length
            int l = i, r = i;
            while (l >= 0 && r < size && s[l] == s[r]) {
                if (r - l + 1 > res.length()) {
                    res = s.substr(l, r - l + 1);
                    // res = s.substr(l, r);
                }
                --l; ++r;
            }
            // * even length
            l = i; r = i + 1;
            while (l >= 0 && r < size && s[l] == s[r]) {
                if (r - l + 1 > res.length()) {
                     res = s.substr(l, r - l + 1);
                    // res = s.substr(l, r + 1);
                }
                --l; ++r;
            }
        }
        return res;
    }
};

int main() {
    string s;
    while (true) {
        cin >> s;
        if (s == "===") break;
        Solution sol;
        cout << sol.longestPalindrome(s) << "\n";
    }
    return 0;
}