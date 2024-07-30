class Solution {
public:
 const string romans[4][10] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},   
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},  
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},  
        {"", "M", "MM", "MMM"}                                          
    };
    string intToRoman(int num) {
        string res = "";
        int pos = 0;
        while(num){
            int d = num%10;
            res = romans[pos][d] + res;
            num/=10;
            pos++;
        }
        return res;
    }
};