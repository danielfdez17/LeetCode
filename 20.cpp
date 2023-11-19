class Solution {
public:
    bool isOpened(char c) {
        return c == '(' || c == '{' || c == '[';
    }
    bool isClosed(char c) {
        return c == ')' || c == '}' || c == ']';
    }
    bool match(char opened, char closed) {
        return (opened == '(' && closed == ')') || (opened == '{' && closed == '}') || (opened == '[' && closed == ']');
    }
    bool isValid(string s) {
        stack<char>st;
        bool valid = true;
        int i = 0;
        while (i < s.size() && valid) {
            char c = s[i];
            if (isOpened(c)) st.push(c);
            else if (isClosed(c)) {
                if (st.empty()) valid = false;
                else {
                    if (match(st.top(), c)) st.pop();
                    else valid = false;
                }
            }
            i++;
        }
        if (!st.empty()) return false;
        return valid;
    }
};