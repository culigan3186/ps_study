#include <bits/stdc++.h>
#define MAX
using namespace std;

int num, a, b;
int MAP[MAX][MAX];
vector<int> candidate;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> num;	
	
	while(ture)
	{
		cin >> a >> b;
		if(a == -1 && b == -1) break;
		MAP[a][b] = 1;
		MAP[b][a] = 1;
	}
	
}
