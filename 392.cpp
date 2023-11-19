class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = s.size();
        int left = 0, right = t.size();
        for (left = 0; left < right && i < j; left++) 
            if (s[i] == t[left]) i++;
        return i == j;
    }
};