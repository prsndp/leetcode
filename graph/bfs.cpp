class Solution{
	public: 
		vector<int>bfsOfGraph(int v, vector<int> adj[])
		{
			vector<int> bfs; //  going to store traversing nodes
			vector<int> vis(V+1, 0); // store visited nodes
			
			for(int i = 1; i<=V; i++)
			{
			if(!vis[i])
			{
				queue<int>q;
				q.push(i);
				vis[i] = 1;
				while(!q.empty())
				{
					int node = q.front();
					q.pop();
					bfs.push_back(node);
					for(auto it: adj[node])
					{
						if(!vis[it])
						{
							q.push(it);
							vis[it] = 1;
						}
					}
				}
			}
			return bfs;
		}
};
