class Solution {
public:
    string minWindow(string s, string t) {
        string ans="";
		//could use vector of size 256 here but for simplicity
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        int mct=0;
        int dmct=t.length();
        for(auto it : t)
            mp2[it]++;

        int i=0;
        int j=0;
        while(true){
            bool f1=false;
            bool f2=false;
            while((i<s.length()) && (mct<dmct)){
                mp1[s[i]]++;
                if(mp1[s[i]]<=mp2[s[i]])
                    mct++;
                f1=true;
                i++;
            }
            while((j<i) && (mct==dmct)){
                string pans=s.substr(j,i-j);
                if(ans.length()==0 or ans.length()>pans.length())
                    ans=pans;
                
                if(mp1[s[j]]==1){
                    mp1.erase(s[j]);
                }else{
                    mp1[s[j]]--;
                }
                if(mp1[s[j]]<mp2[s[j]])
                    mct--;
                f2=true;
                j++;
            }
            if(f1==false and f2==false)
                break;
        }
        return ans;
    } 
};