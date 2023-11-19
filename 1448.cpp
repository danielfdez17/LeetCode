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
    int goodNodesAux(TreeNode* root, int maximun) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) {
            if (root->val >= maximun) return 1;
            return 0;
        }
        int l = goodNodesAux(root->left, max(maximun, root->val));
        int r = goodNodesAux(root->right, max(maximun, root->val));
        int goodNodes = l + r;
        if (root->val >= maximun) goodNodes++;
        return goodNodes;

    }
    int goodNodes(TreeNode* root) {
        return goodNodesAux(root, INT_MIN);
    }
};