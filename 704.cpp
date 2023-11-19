class Solution {
public:
    void binarySearch(vector<int>&nums, int target, int&pos, bool&found, int begin, int end) {
        if (found) return;
        if (begin == end) {
            if (nums[begin] == target) {
                found = true;
                pos = begin;
            }
        }
        else if (begin + 1 == end) {
            if (nums[begin] == target) {
                found = true;
                pos = begin;
            }
            else if (nums[end] == target) {
                found = true;
                pos = end;
            }
        }
        else {
            int m = (begin + end) / 2;
            if (nums[m] == target) {
                found = true;
                pos = m;
            }
            else if (nums[m] < target) {
                binarySearch(nums, target, pos, found, m + 1, end);
            }
            else {
                binarySearch(nums, target, pos, found, begin, m - 1);
            }
        }
    }
    int search(vector<int>& nums, int target) {
        int pos = -1; bool found = false;
        binarySearch(nums, target, pos, found, 0, nums.size() - 1);
        return pos;
    }
};