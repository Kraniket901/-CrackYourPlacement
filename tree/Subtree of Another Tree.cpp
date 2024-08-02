class Solution {
public:
    bool res = false;
    bool func(TreeNode* root, TreeNode* subRoot) {
        if (!root && !subRoot) return true;
        if (!root || !subRoot) return false;
        return (root->val == subRoot->val) && func(root->left, subRoot->left) && func(root->right, subRoot->right);
    }

    void solve(TreeNode* root, TreeNode* subRoot) {
        if (!root) return;
        if (root->val == subRoot->val) {
            if(func(root, subRoot)) res=true;
        }
        solve(root->left, subRoot); solve(root->right, subRoot);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // if (!subRoot) return true;
        // if (!root) return false;
        solve(root, subRoot);
        return res;
    }
};