class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<char>>&board, int delrow[], int delcol[]){
        vis[row][col] = 1;
        int n = board.size();
        int m = board[0].size();
        for(int j=0; j<4; j++){
            int nr = row + delrow[j];
            int nc = col + delcol[j];
            if(nr>=0 && nr<n && nc >=0 && nc < m && !vis[nr][nc] && board[nr][nc] == 'O'){
                dfs(nr, nc, vis, board, delrow, delcol);
            }
        }
    
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int delrow[] = {0, -1, 0, +1};
        int delcol[] = {-1, 0, +1, 0};
        vector<vector<int>>vis(n, vector<int>(m,0));
        for(int i=0; i<m; i++){
            if(!vis[0][i] && board[0][i]=='O'){
                dfs(0, i, vis, board, delrow, delcol);
            }
            if(!vis[n-1][i] && board[n-1][i] == 'O'){
                dfs(n-1, i, vis, board, delrow, delcol);
            }
        }
        for(int j=0; j<n; j++){
            if(!vis[j][0] && board[j][0]=='O'){
                dfs(j, 0, vis, board, delrow, delcol);
            }
            if(!vis[j][m-1] && board[j][m-1]=='O'){
                dfs(j, m-1, vis, board, delrow, delcol);
            }
        }
        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && board[i][j] == 'O'){
                    board[i][j]='X';
                }
            }
        }
        
    }
};