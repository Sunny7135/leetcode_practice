class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>adj(n);
        vector<int>vis(n, 0);
        for(int i=0; i<n; i++){
            vis[i] = graph[i].size();
            for(int it : graph[i]){
                adj[it].push_back(i);
            }
        }
    
        queue<int>q;
        for(int i=0; i<n ;i++){
            if(vis[i] == 0){
                q.push(i);
            }
        }

        vector<int>res;
        while(!q.empty()){
            int node = q.front();
            q.pop();

            res.push_back(node);
            for(int i : adj[node]){
                vis[i]--;
                
                if(vis[i] == 0)
                    q.push(i);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};