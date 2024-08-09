class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int>m;
        for(int i = 0; i < tasks.size(); i ++){
            m[tasks[i]]++;
        }
        priority_queue<int>maxh;
        for(auto it : m){
            maxh.push(it.second);
        }
        queue<pair<int,int>>q;
        int time = 0;
        while(!maxh.empty() || !q.empty()){
            time++;
            if(maxh.size()){
                int a = maxh.top();
                maxh.pop();
                if(a>1){
                q.push({a-1,time+n});
                }
            }
            if(q.size()){
                if(q.front().second<=time){
                maxh.push(q.front().first);
                q.pop();
            }
            }
        }
        return time;
    }
};