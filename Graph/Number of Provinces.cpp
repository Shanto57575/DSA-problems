// https://leetcode.com/problems/number-of-provinces/description/

// sc --> O(N) + O(N) // --> vis array --> recursion stack
// tc --> O(N) + (v + 2E) ~ O(N)

// using dfs
class Solution {
private:
    void dfs(int i, int n, vector<vector<int>> &isConnected, vector<bool> &vis)
    {
        vis[i] = true;
        for(int j=0; j<n; j++)
        {
          if(isConnected[i][j] == 1 && !vis[j])
          {
            dfs(j, n, isConnected, vis);
          }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n, false);
        int cnt = 0;

        for(int i=0; i<n; i++)
        {
           if(!vis[i])
           {
               cnt++;
               dfs(i, n, isConnected, vis);
           }
        }

        return cnt;
    }
};

// using bfs

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n, false);
        queue<int>q;
        int cnt = 0;

        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                vis[i] = true;
                q.push(i);

                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();

                    for(int j = 0; j < n; j++)
                    {
                        if(isConnected[node][j]==1 && !vis[j])
                        {
                            vis[j] = true;
                            q.push(j);
                        }
                    }
                }

                cnt++;
            }
        }

        return cnt;
    }
};
