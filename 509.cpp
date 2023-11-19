#include<vector>
using namespace std;

vector<int>fib_numbers(31, -1);

class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1) return fib_numbers[n] = n;
        if (fib_numbers[n] != -1) return fib_numbers[n];
        return fib_numbers[n] = fib(n - 1) + fib(n - 2);
    }
};