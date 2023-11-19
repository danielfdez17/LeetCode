class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) return 1;
        int l = maxDepth(root->left), r = maxDepth(root->right);
        if (l > r) return l + 1;
        return r + 1;
    }
};