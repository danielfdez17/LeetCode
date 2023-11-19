class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = INT_MAX, left = 0, right = 0, sum = 0;
        while (right < nums.size()) {
            sum += nums[right];
            while (sum >= target) {
                s = min(s, right - left + 1);
                sum -= nums[left++];
            }
            right++;
        }
        return (s == INT_MAX ? 0 : s);
    }
};