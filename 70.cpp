#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    vector<int>dp;
    int climbStairsRecursive(int n) {
        if (dp[n] != -1) 
            return dp[n];
        if (n == 1 || n == 2)
            return dp[n] = n;
        return dp[n] = climbStairsRecursive(n - 1) +
                        climbStairsRecursive(n - 2);
    }
public:
    int climbStairs(int n) {
        dp = vector<int>(n + 1, -1);
        return climbStairsRecursive(n);
    }
    // int climbStairs(int n) {
    //     if (n == 1 || n == 2) return n;
    //     vector<int>dp(n + 1, 0);
    //     dp[1] = 1; dp[2] = 2;
    //     for (int i = 3; i <= n; ++i) {
    //         dp[i] = dp[i - 1] + dp[i - 2];
    //     }
    //     return dp[n];
    // }
    // int climbStairsRecursive(int n, vector<int>&dp) {
    //     if (dp[n] != -1) 
    //         return dp[n];
    //     if (n == 1 || n == 2)
    //         return dp[n] = n;
    //     return dp[n] = climbStairsRecursive(n - 1, dp) +
    //                     climbStairsRecursive(n - 2, dp);
    // }
};

int main() {
    int n; 
    while (true) {
        cin >> n;
        if (n == 0) break;
        Solution sol;
        cout << sol.climbStairs(n) << "\n";
    }
    return 0;
}