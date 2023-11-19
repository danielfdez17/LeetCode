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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr) return nullptr;
        if (root->val == val) return root;
        TreeNode* l = searchBST(root->left, val);
        if (l != nullptr && l->val == val) return l;
        TreeNode* r = searchBST(root->right, val);
        if (r != nullptr && r->val == val); return r;
        return nullptr;
    }
};