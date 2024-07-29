class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string res = "";
        int i = 0;
        while(i<min(strs[0].size(),strs[strs.size()-1].size())){
            if(strs[0][i]==strs[strs.size()-1][i]){
                res.push_back(strs[0][i]);
            }else break;
            i++;
        }
        return res;
    }
};