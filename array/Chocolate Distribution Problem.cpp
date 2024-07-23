class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        int l = 0;
        int r = m-1;
        long long mini = INT_MAX;
        while(r<n){
            mini = min(mini,a[r]-a[l]);
            l++;
            r++;
        }
        return mini;
    }   
};