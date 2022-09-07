#include <bits/stdc++.h>
using namespace std;

int dp[10001];
int wine[10001];

int main()
{
	int n, ans;
	cin >> n;
	for(int i=0; i<n; i++) cin >> wine[i];
	dp[0] = wine[0];
	ans = dp[0];
	
	for(int i=1; i<n; i++)
	{
		dp[i] = max(dp[i-1]+wine[i],
	}
}
