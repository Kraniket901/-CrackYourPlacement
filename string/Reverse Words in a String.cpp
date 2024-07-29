class Solution {
public:
 
    string reverseWords(string s) {
    stack<string> st;
    string temp = "";
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (!temp.empty()) {
                st.push(temp);
                temp = "";
            }
        } else {
            temp += s[i];
        }
    }
    if (!temp.empty()) {
        st.push(temp);
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();

        res += ' ';
    }
    res.pop_back();

    return res;
    }
};