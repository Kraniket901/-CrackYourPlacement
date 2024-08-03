// string &s
class Solution {
public:
    void solve(TreeNode* root, vector<string> &res, string &s){
        string s1 = s;
        s+=to_string(root->val);
        s+="->";
        if(!root->left && !root->right){
            if(s.size()){
                s.pop_back();
                s.pop_back();
                res.push_back(s);
                s=s1;
                return;
            }
        }
        if(root->left) solve(root->left, res, s);
        if(root->right) solve(root->right, res, s);
        s= s1;

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        string s = "";
        solve(root, res, s);
        return res;
    }
};

// string curr
class Solution {
public:
    void helper(TreeNode* root,vector<string>& answer,string curr){
        if(!root)return;
        if(root->left||root->right)curr+=(to_string(root->val)+"->");
        else{
            curr+=(to_string(root->val));
            answer.push_back(curr);
        }
        helper(root->left,answer,curr);
        helper(root->right,answer,curr);  
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        string curr="";
        helper(root,answer,curr);
        return answer;
    }
};