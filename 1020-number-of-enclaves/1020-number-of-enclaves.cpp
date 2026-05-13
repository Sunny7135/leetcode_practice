class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>&vis, vector<vector<int>>&grid, int nrow[], int ncol[]){
        vis[r][c] = 1;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<4; i++){
            int row = r + nrow[i];
            int col = c + ncol[i];
            if(row>=0 && row<n && col >=0 && col<m && !vis[row][col] && grid[row][col]==1){
                dfs(row, col, vis, grid, nrow, ncol);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m,0));
        int nrow[] = {0, -1, 0, +1};
        int ncol[] = {-1, 0, +1, 0};
        for(int i=0; i<m; i++){
           if(!vis[0][i] && grid[0][i] == 1){
                dfs(0, i, vis, grid, nrow, ncol);
            }
            if(!vis[n-1][i] && grid[n-1][i] == 1){
                dfs(n-1, i, vis, grid, nrow, ncol);
            }
        }
        for(int j =0; j<n; j++){
            if(!vis[j][0] && grid[j][0] == 1){
                dfs(j, 0, vis, grid, nrow, ncol);
            }
            if(!vis[j][m-1] && grid[j][m-1] == 1){
                dfs(j, m-1, vis, grid , nrow, ncol);
            }
        }
        int cnt =0;
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                if(!vis[i][j] && grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};