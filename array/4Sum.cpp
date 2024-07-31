class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1;
            int right = n - 1;
            while (left < right) {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[left];
                sum += nums[right];
                if (sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[left], nums[right]};
                    ans.push_back(temp);
                    while (left < right && nums[left] == temp[2]) left++;
                    while (left < right && nums[right] == temp[3]) right--;
                }
                else if (sum < target) left++;
                else right--;
            }
        }
    }

    return ans;
    }
};

//not efficient but easier to understand

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<nums.size()-3; i++){
            for(int j=i+1; j<nums.size()-2; j++){
            int low = j+1, high = nums.size()-1;
            while(low < high){
                if(nums[i] + nums[j] + nums[low] + nums[high] < target){
                    low++;
                }
                else if(nums[i] + nums[j] + nums[low] + nums[high] > target){
                    high--;
                }
                else{
                    set.insert({nums[i], nums[j], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};