class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        queue<int>q;

        for(int i=0; i<n; i++){
            for(auto &it : rooms[i]){
                adj[i].push_back(it);
            }
        }
        vis[0] =1;
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        for(int i =0; i<n; i++){
            if(!vis[i])return false;
        }
        return true;
    }
};