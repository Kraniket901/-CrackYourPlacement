class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int res = INT_MIN;
        vector<int>start(a.size()+1,0);
        for(int i = 0; i<a.size(); i++){
            start[i+1]=start[i]+a[i];
        }
        vector<int>end(a.size()+1,0);
        for(int i = 0; i<a.size(); i++){
            end[i+1]=end[i]+a[a.size()-(i+1)];
        }
        for(int i = 0; i<=k; i++){
            res=max(res, start[i]+end[k-i]);
        }
        return res;
    }
};