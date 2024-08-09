class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s = accumulate(gas.begin(), gas.end(), 0);
        int t = accumulate(cost.begin(), cost.end(), 0);
        if(t>s) return -1;
        int res = 0;
        int sum = 0;
        for(int i = 0; i<gas.size(); i++){
            sum+=(gas[i]-cost[i]);
            if(sum<0){
                res=i+1;
                sum=0;
            }
        }
        return res;
    }
};