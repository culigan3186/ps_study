#include <iostream>

using namespace std;
int n;
char map[1001][1001];
int ans[1001][1001];

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	 
	cin >> n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> map[i][j];
			if(map[i][j]!='.')
			{
				ans[i][j] = '*';
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(ans[i][j]=='*') continue;
			else
			{
				int sum=0;
				for(int k=0; k<8; k++)
				{
					int nx = i + dx[k];
					int ny = j + dy[k];
					if(0 <= nx && nx < n && 0 <= ny && ny <n)
					{
						if(map[nx][ny]!='.')
						{
							ans[i][j]+=(map[nx][ny]-'0');
						}
					}
				}			
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(ans[i][j]=='*') cout << '*';
			else if(ans[i][j]>=10) cout << 'M';
			else cout << ans[i][j];
		}
		cout <<'\n';
	}
	
}
