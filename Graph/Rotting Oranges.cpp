// https://leetcode.com/problems/rotting-oranges/description/

// Time Complexity: O(NxM + NxMx4) ~ O(N x M)
// Space Complexity ~ O(N x M), O(N x M) 

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int vis[n][m];

        // row, col, time
        queue<pair<pair<int,int>, int>> q;

        int fresh = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==2)
                {
                    vis[i][j] = 2;
                    q.push({{i,j}, 0});
                }
                else vis[i][j] = 0;
                if(grid[i][j]==1) fresh++;
            }
        }

        int tm = 0;

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};
        
        int cnt = 0;

        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int time = q.front().second;
            q.pop();
            tm = max(time, tm);
            for(int i=0; i<4; i++)
            {
               int nr = r + dr[i];
               int nc = c + dc[i];
                
                /* 
                  check if it crosssing the boundary and 
                  check if the cell is visited and contain 
                  fresh orange 
                */

               if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc] == 0 && 
                  grid[nr][nc]==1)
               {
                   vis[nr][nc] = 2;
                   q.push({{nr,nc}, time + 1});
                   cnt++;
               }
            }
        }

        if(cnt!=fresh) return -1;
        return tm;
    }
};
