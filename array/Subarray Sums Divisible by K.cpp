class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        long long sum = 0;
        unordered_map<int,int>m;
        m[0]=1; // this is done because initial cumulative sum = 0 and that sum%k will be equal to 0 always
        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            int resu=sum%k;
            if(resu<0) resu+=k;
            m[resu]++;
        }
        int count = 0;
        for(auto it: m){
            if(it.second>1){
                count+=(it.second)*(it.second-1)/2;
            }
        }
        return count;
    }
};