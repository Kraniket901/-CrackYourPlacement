class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i<haystack.length(); i++){
            if(haystack[i]==needle[0]){
                int j = 0;
                int k = i;
                while(k<haystack.length() && j<needle.size()){
                    if(haystack[k]!=needle[j]) break;
                    j++; k++;
                }
                if(j==needle.size()) return i;
            }
        }
        return -1;
    }
};