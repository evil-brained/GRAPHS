/* YV JAWAHAR -GRAPH THEORIES */
#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
}
int main()
{
int V;
cin>>V;
vector<int>bfs;
vector<int>vis(V+1,0);
for(int i=0;i<=V;++i)
{
	if(vis[i]==0)
	{
		queue<int>q;
		q.push(i);
		vis[i]=1;
		while(!q.empty()){
			int node=q.front();
			q.pop();
			bfs.push_back(node);
			for(auto it:adj[node])
			{
				if(!vis[it]){
					q.push(it);
					vis[it]=1;
				}
			}
		}
	}
}

return 0;
}
