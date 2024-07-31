class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
    vector<vector<int> > res;
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++) {
        int target = -num[i];
        int front = i + 1;
        int back = num.size() - 1;
        while (front < back) {
            int sum = num[front] + num[back];
            if (sum < target) front++;
            else if (sum > target) back--;
            else {
                vector<int> triplet = {num[i], num[front], num[back]};
                res.push_back(triplet);
                while (front < back && num[front] == triplet[1]) front++;
                while (front < back && num[back] == triplet[2]) back--;
            } 
        }
        while (i + 1 < num.size() && num[i + 1] == num[i]) i++;
    }
    return res;
}
};

//not efficient but easier to understand

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<nums.size()-2; i++){
            int low = i+1, high = nums.size()-1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                else{
                    set.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};

