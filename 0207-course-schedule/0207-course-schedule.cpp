class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int>adj[n];
        for(auto it: prerequisites){
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
        }

        vector<int> deg(n,0);
        for(int i=0; i<n;i++){
           for(auto it : adj[i]){
            deg[it]++;
           }
        }
        queue<int> q;
        for(int i=0; i<n; i++){
            if(deg[i] == 0)q.push(i);
        }
        vector<int>store;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            store.push_back(node);

            for(auto it : adj[node]){
                deg[it]--;
                if(deg[it]==0)q.push(it);
            }
        }

        if(store.size() == n) return true;
        return false;
    }
};