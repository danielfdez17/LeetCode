class Solution {
public:
    void binarySearch(vector<int>&nums, int target, int&pos, bool&found, int begin, int end) {
        if (found) return;
        if (begin == end) {
            found = true;
            pos = begin;
            if (nums[begin] < target) pos++;
        }
        else if (begin + 1 == end) {
            found = true;
            if (nums[begin] == target)
                pos = begin;
            else if (nums[end] == target)
                pos = end;
            else if (target < nums[begin])
                pos = begin;
            else if (nums[begin] < target && target < nums[end])
                pos = begin + 1;
            else if (nums[end] < target)
                pos = end + 1;

        }
        else {
            int m = (begin + end) / 2;
            if (nums[m] == target) {
                found = true;
                pos = m;
            }
            else if (nums[m] < target)
                binarySearch(nums, target, pos, found, m + 1, end);
            else
                binarySearch(nums, target, pos, found, begin, m - 1);
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        int pos = -1; bool found = false;
        binarySearch(nums, target, pos, found, 0, nums.size() - 1);
        return pos;
    }
};