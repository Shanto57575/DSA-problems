
// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=dfs_of_graph

// tc --> O(N) + O(2E) 
// sc --> (3*N) --> O(N)

class Solution {
  private:
   void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ls)
   {
      vis[node] = 1;
      ls.push_back(node);
      
      for(auto it : adj[node])
      {
        if(!vis[it])
        {
            dfs(it, adj, vis, ls);
        }
      }
   }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>vis(V, 0), ls;
        int start = 0;
        dfs(start, adj, vis, ls);
        return ls;
    }
};
