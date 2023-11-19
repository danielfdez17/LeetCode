#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int begin = 0, end = nums.size() - 1, i = 0;
        unordered_map<int, int> map;
        bool exit = false;
        while (i < nums.size() && !exit) {
            if (map.find(target - nums[i]) != map.end()) {
                begin = map[target - nums[i]];
                end = i;
                exit = true;
            }
            map[nums[i]] = i;
            i++;
        }
        return {begin, end};
    }
};