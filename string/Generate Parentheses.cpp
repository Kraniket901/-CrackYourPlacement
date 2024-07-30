class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        int o = n;
        int c = n;
        string op = "";
        func(res,o,c,op);
        return res;
    }
    void func(vector<string>&res, int o, int c, string op){
        if(o==0 && c==0){
            res.push_back(op);
        }
        if(o<c){
            string st = op;
            st.push_back(')');
            func(res, o, c-1, st);
        }
        if(o){
            string st = op;
            st.push_back('(');
            func(res, o-1, c, st);
        }
    }
};