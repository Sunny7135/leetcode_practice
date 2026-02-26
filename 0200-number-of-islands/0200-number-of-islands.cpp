class Solution {
public:
    void dfs(int r, int c, vector<vector<char>>&grid){
        int m = grid.size();
        int n = grid[0].size();

        if(r<0 || c<0 || r>=m || c >=n || grid[r][c]=='0'){
            return;
        }
        grid[r][c] = '0';

        dfs(r-1, c, grid);
        dfs(r+1, c, grid);
        dfs(r, c-1, grid);
        dfs(r, c+1, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    dfs(i, j, grid);
                    count++;
                }
            }
        }
        return count;
    }
};