class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return solve(root->left, root->right);
    }
    bool solve(TreeNode* left, TreeNode* right){
        if(!left && !right) return true;
        if(!left || !right) return false;
        return (left->val == right->val) && solve(left->left, right->right) && solve(left->right, right->left);
    }
};