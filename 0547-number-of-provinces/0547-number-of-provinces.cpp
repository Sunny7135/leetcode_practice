class Solution {
public:
    void dfs(int node, vector<int>ls[], vector<int>&vis){
        vis[node] = 1;
        for(auto it: ls[node]){
            if(!vis[it]){
                dfs(it, ls, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int>ls[v];
        for(int i=0; i<v; i++){
            for(int j=i+1; j<v; j++){
                if(isConnected[i][j] == 1){
                    ls[i].push_back(j);
                    ls[j].push_back(i);
                }
            }
        }
        vector<int>vis(v,0);
        int count =0;
        for(int i=0; i<v; i++){
            if(!vis[i]){
                count++;
                dfs(i, ls, vis);
            }
        }
        return count;
    }
};