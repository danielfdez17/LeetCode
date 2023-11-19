#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int i = 0;
    while (i < t.length() && s[i] == t[i]) {
        i++;
    }
    return i == t.length();
    }
};