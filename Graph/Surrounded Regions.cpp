// https://leetcode.com/problems/surrounded-regions/description/

// tc --> O(n * m)
// sc --> O(n * m)

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        queue<pair<int,int>>q;

        for(int i=0; i<m; i++)
        {
           if(board[0][i]=='O')
           {
             vis[0][i] = true;
             q.push({0, i});
           }
           if(board[n-1][i]=='O')
           {
             vis[n-1][i] = true;
             q.push({n-1, i});
           }
        }
        
        for(int i=0; i<n; i++)
        {
           if(board[i][0]=='O')
           {
             vis[i][0] = true;
             q.push({i, 0});
           }
           if(board[i][m-1]=='O')
           {
             vis[i][m-1] = true;
             q.push({i, m-1});
           }
        }
        
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i=0; i<4; i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O')
                {
                   vis[nrow][ncol] = true;
                   q.push({nrow, ncol});
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]=='O' && !vis[i][j])
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
