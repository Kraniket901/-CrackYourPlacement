class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        while(a.size() && b.size()){
            int aa = (a[a.size()-1]=='1')?1:0;
            int bb = (b[b.size()-1]=='1')?1:0;
            cout<<aa<<" "<<bb<<endl;
            a.pop_back();
            b.pop_back();
            int sum = aa+bb;
            sum=sum+carry;
            if(sum==0){
                res="0"+res;
                carry=0;
            }else if(sum==1){
                res="1"+res;
                carry=0;
            }else if(sum==2){
                res="0"+res;
                carry=1;
            } else{
                res="1"+res;
                carry=1;
            }
        }
        while(a.size()){
            int aa = (a[a.size()-1]=='1')?1:0;
            a.pop_back();
            int sum = aa+carry;
            if(sum==0){
                res="0"+res;
                carry=0;
            }else if(sum==1){
                res="1"+res;
                carry=0;
            }else if(sum==2){
                res="0"+res;
                carry=1;
            } else{
                res="1"+res;
                carry=1;
            }
        }
         while(b.size()){
            int bb = (b[b.size()-1]=='1')?1:0;
            b.pop_back();
            int sum = bb+carry;
            if(sum==0){
                res="0"+res;
                carry=0;
            }else if(sum==1){
                res="1"+res;
                carry=0;
            }else if(sum==2){
                res="0"+res;
                carry=1;
            } else{
                res="1"+res;
                carry=1;
            }
        }
        if(carry==1){
            res="1"+res;
        }
        return res;
    }
};