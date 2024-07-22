class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];
                }
            }
        }
        return len;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        vector<int>cnt(len+1,0);
        for (int i = 0; i < len; i++) {
            cnt[nums[i]]++;
            if(cnt[nums[i]]>1) return nums[i];
        }
        return len;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int num : nums) m[num]++;
        for(auto it : m) if(it.second>1) return it.first;
        return -1;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for (int num : nums) {
            if(s.find(num)!=s.end()) return num;
            s.insert(num);
        }
        return -1;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i< nums.size()-1; i++) if(nums[i]==nums[i+1]) return nums[i];
        return -1;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        } return slow;
    }
};

// Pigeonhole Principle
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1;
        int r = nums.size()-1;
        while(l<r){
            int mid = l + (r-l)/2;
            int cnt = 0;
            for(int num : nums) if(num<=mid) cnt++;
            if(cnt>mid) r = mid;
            else l = mid+1;
        }
        return l;
    }
};

