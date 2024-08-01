int res = 0;
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        res = 0;
        solve(root);
        return res;
    }
    int solve(TreeNode* node){
        if(!node) return 0;
        int l = solve(node->left);
        int r = solve(node->right);
        res = max(res, l+r);
        return max(l,r)+1;
    }
};