class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int>res;
        map<int,vector<int>>m;
        for(int i =0; i < adjacentPairs.size(); i++){
            m[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            m[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        for(auto it : m){
            if(it.second.size()==1){
                res.push_back(it.first);
                res.push_back(it.second[0]);
                break;
            }
        }
        while(res.size()<adjacentPairs.size()+1){
            int last = res[res.size()-1];
             int prev = res[res.size()-2];
             if(m[last][0]!=prev)
            res.push_back(m[last][0]);
            else
            res.push_back(m[last][1]);
        }
        return res;
    }
};