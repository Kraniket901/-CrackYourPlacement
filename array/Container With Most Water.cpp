class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = INT_MIN;
        int i=0, j=height.size()-1;
        while(i < j)
        {
            int mh = min(height[i], height[j]);
            res = max(res, mh*(j-i));

            if (height[i]<height[j]) i++;
            else j--;

        }
        return res;
    }
};