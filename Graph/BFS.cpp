// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bfs_of_graph

// tc --> O(N) + O(2E) --> For an while loop o(N) and it will go to for every neighbour
// sc --> (3*N) --> O(N) --> queue / vis array / bfs

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        q.push(0);
        vector<int>vis(V, 0), bfs;
        vis[0] = 1;
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        
        return bfs;
    }
};
