class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int num : nums){
            s.insert(num);
        }
        vector<int>res;
        for(auto it : s){
            res.push_back(it);
        }
        nums=res;
        return s.size();
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};