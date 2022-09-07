#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, r, c, d, cnt;
int map[51][51];
int visited[51][51];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
// d == 0 : north
// d == 1 : east
// d == 2 : south
// d == 3 : west
void dfs()
{
	for(int i = 0; i < 4; i++)
	{
		int next_d = (d+3 - i)%4;
		int next_r = r + dx[next_d];
		int next_c = c + dy[next_d];
		
		if(next_r <0 || next_r >=n || next_c >= m || map[next_r][next_c]==1)
		{
			continue;
		}
		
		if (map[next_r][next_c] == 0 && visited[next_r][next_c]==0)
		{
			visited[next_r][next_c] = 1;
			r = next_r;
			c = next_c;
			d = next_d;
			cnt++;
			dfs();
		}
	}
	int back_idx = d > 1 ? d-2 : d+2;
	int back_r = r + dx[back_idx];
	int back_c = c + dy[back_idx];
	
	if(back_r >=0 && back_r <= n || back_c >= 0 || back_c <= m)
	{
		if(map[back_r][back_c] == 0)
		{
			r = back_r;
			c = back_c;
			dfs();
		}
		else
		{
			cout << cnt<<'\n';
			exit(0);
		}
	}
	
}
int main()
{
	cin >> n >> m;
	cin >> r >> c >> d;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin >> map[i][j];
		}
	}
	visited[r][c] = 1;
	cnt++;
	dfs();
}
