// https://www.geeksforgeeks.org/problems/level-of-nodes-1587115620/1

// tc --> O(V + E)
// sc --> O(V)

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	   queue<pair<int,int>>q;
	   q.push({0,0});
	   
	   vector<bool> vis(V, false);
	   vis[0] = true;
	   
	   while(!q.empty())
	   {
	       int node = q.front().first;
	       int dist = q.front().second;
	       q.pop();
	       
	       if(node==X) return dist;
	       
	       for(int i : adj[node])
	       {
	          if(!vis[i])
	          {
	              vis[i] = true;
	              q.push({i, dist+1});
	          }
	       }
	   }
	   
	   return -1;
	}
};
