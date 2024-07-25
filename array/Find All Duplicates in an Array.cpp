class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>m;
        for(int num : nums) m[num]++;
        for(auto it : m){
            if(it.second==2) res.push_back(it.first);
        }
        return res;
    }
};