/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void leafs(TreeNode* root, vector<int>&sol) {
        if (root == nullptr) return;
        if (root->left == nullptr && root->right == nullptr) sol.push_back(root->val);
        else {
            leafs(root->left, sol);
            leafs(root->right, sol);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left, right;
        leafs(root1, left);
        leafs(root2, right);
        if (left.size() != right.size()) return false;
        int i = 0; bool exit = false;
        while (i < left.size() && !exit) {
            exit = left[i] != right[i];
            i++;
        }
        return !exit;
    }
};