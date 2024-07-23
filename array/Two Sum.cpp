class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i = 0; i<nums.size(); i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            if(v[l].first+v[r].first==target) return {v[l].second,v[r].second};
            else if(v[l].first+v[r].first<target) l++;
            else r--;
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int>m;
       for(int i = 0; i < nums.size(); i++){
        if(m.find(target-nums[i])!=m.end()){
            return {m[target-nums[i]],i};
        }else{
            m[nums[i]]=i;
        }
       }
       return {};
    }
};