#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
class Solution {
public:
    int getValue(char c) {
        int ret;
        switch (c) {
            case 'I': ret = I; break;
            case 'V': ret = V; break;
            case 'X': ret = X; break;
            case 'L': ret = L; break;
            case 'C': ret = C; break;
            case 'D': ret = D; break;
            case 'M': ret = M; break;
        }
        return ret;
    }
    int romanToInt(string s) {
        int sum = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            int cur = getValue(s[i]), prev = getValue(s[i + 1]);
            if (cur < prev) sum -= cur;
            else sum += cur;
        }
        return sum;
    }
};
