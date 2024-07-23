class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int res = 0;
        for(int num : prices){
            mini = min(mini, num);
            res = max(res, num-mini);
        }
        return res;
    }
};