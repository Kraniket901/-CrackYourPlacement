class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reachable = 0;
        for (int i = 0; i < nums.size(); ++i) {
        if (i > max_reachable) {
            return false;
        }
        max_reachable = max(max_reachable, i + nums[i]);
    }
    return true;
    }
};