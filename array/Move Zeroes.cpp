class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        for(int num : nums){
            if(num){
                nums[l]=num;
                l++;
            }
        }
        while(l<nums.size()){
            nums[l]=0;
            l++;
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
};