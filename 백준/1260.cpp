#include <bits/stdc++.h>
using namespace std;

int n,m,v,first, second;
int Map[1001][1001];
bool visited[1001];
void dfs(int v)
{
	visited[v] = true;
	cout << v <<" ";
	for(int i=1; i<=n; i++)
	{
		if(Map[v][i]==1 && visited[i]==0)
		{
			dfs(i);
		}
	}
}

void bfs(int v)
{
	queue<int> q;
	q.push(v);
	visited[v] = true;
	cout << v << " ";
	while(!q.empty())
	{
		int s = q.front();
		q.pop();
		
		for(int i=1; i<=n; i++)
		{
			if(Map[s][i]==1 && visited[i]==0)
			{
				q.push(i);
				cout << i << " ";
				visited[i]=true;
			}
		}
	}
} 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	cin >> n >> m >> v; // 정점, 간선, 시작정점 
	
	for(int i=0; i<m; i++)
	{
		cin >> first >> second;
		Map[first][second] = 1;
		Map[second][first] = 1;
	}
	dfs(v);
	for(int i=1; i<=n; i++){
		visited[i] = false;
	}
	cout <<'\n';
	bfs(v);
	return 0; 
}
