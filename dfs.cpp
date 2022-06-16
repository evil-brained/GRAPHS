/* YV JAWAHAR - GRAPH THEORIES */
#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
}
	void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&storeDFS)
	{
		storeDFS.push_back(node);
		vis[node]=1;
		for(auto it:adj[node])
		{
			if(!vis[it])
			{
				dfs(it,vis,adj,storeDFS);
			}
		}
	}

		void dfsofGRAPH(int V,vector<int>adj[]){
			vector<int>storeDFS;
			vector<int>vis(V+1,0);
			for(int i=1;i<=V;++i)
			{
				if(!vis[i])
				{
					dfs(i,vis,adj,storeDFS);
				}
			}
			for(auto it:storeDFS)
			{
				printf("%d ",it);
			}
		}
	

int main()
{
int V;
cin>>V;
vector<int>adj(0,V+1);
dfsofGRAPH(V,adj);
	

return 0;
}
