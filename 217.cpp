#include<unordered_map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool>map;
    bool exit = false;
    int i = 0;
    while (i < nums.size() && !exit) {
        unordered_map<int, bool>::iterator it = map.find(nums[i]);
        if (it == map.end()) map.insert({nums[i], false});
        else exit = true;
        i++;
    }
    return exit;
    }
};