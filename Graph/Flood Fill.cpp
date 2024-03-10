// https://leetcode.com/problems/flood-fill/description/

// using bfs

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)return image;
        vector<vector<int>> replica = image;
        int n = image.size();
        int m = image[0].size();
        int initialColor = image[sr][sc];

        int vis[n][m];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc] = color;

        vis[sr][sc] = color; 
        
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        while(!q.empty())
        {
           int r = q.front().first;
           int c = q.front().second;
           q.pop();

           for(int i=0; i<4; i++)
           {
              int nr = r + dr[i];
              int nc = c + dc[i];

              if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]!=color && image[nr][nc] == initialColor)
              {
                  image[nr][nc] = color;
                  vis[nr][nc] = color; 
                  q.push({nr,nc});
              } 
           }
        }
        return image;
    }
};

// using dfs 

class Solution {
private:
   void dfs(int sr, int sc, vector<vector<int>> &ans, vector<vector<int>> &image, 
   int color, int initialColor, int dr[], int dc[])
   {
       ans[sr][sc] = color;
       int n = image.size();
       int m = image[0].size();
       for(int i=0; i<4; i++)
       {
           int nr = sr + dr[i];
           int nc = sc + dc[i];

           if(nr>=0 && nr<n && nc>=0 && nc<m && ans[nr][nc]!=color && 
             image[nr][nc]==initialColor)
           {
               dfs(nr,nc, ans, image, color, initialColor, dr, dc);
           }
       }
   }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        vector<vector<int>>ans = image;
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};
        dfs(sr, sc, ans, image, color, initialColor, dr, dc);
        return ans;
    }
};

// Time Complexity: O(NxM + NxMx4) ~ O(N x M)

// Space Complexity: O(N x M) + O(N x M)

