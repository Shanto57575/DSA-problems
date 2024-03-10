// https://www.codingninjas.com/studio/problems/detect-cycle-in-an-undirected-graph-_758967?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// tc --> O(N + 2E)
// sc --> O(N)

// using BFS

class Graph {
    bool detect(int src, vector<bool> &vis, vector<int> adj[])
    {
       queue<pair<int,int>> q;
       q.push({src, -1});

       vis[src] = true;

       while(!q.empty())
       {
           int node = q.front().first;
           int parent = q.front().second;
           q.pop();

           for(int i : adj[node])
           {
               if(!vis[i])
               {
                   vis[i] = true;
                   q.push({i, node});
               }
               else if(parent != i)
               {
                   return true;
               }
           }
       }

       return false;
    }
public:
    bool detectCycle(int V, vector<int> adj[]) {
        vector<bool>vis(V+1, false);
        for(int i=0; i<V; i++)
        {
            if(!vis[i] && detect(i, vis, adj))
               return true;
        }           

        return false;     
    }
};
