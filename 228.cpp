class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    if (nums.size() == 0) return vector<string>();
    vector<string> sol;
    int count = 1, last = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (last + 1 == nums[i]) {
            count++;
        }
        else {
            string aux = "";
            if (count != 1) {
                aux += (to_string(nums[i - count]) + "->");           
            }
            aux += to_string(last);
            sol.push_back(aux);
            count = 1;
        }
        last = nums[i];
    }
    string aux = "";
    if (count != 1) {
        aux += (to_string(nums[nums.size() - count]) + "->");           
    }
    aux += to_string(last);
    sol.push_back(aux);
    return sol;
    }
};