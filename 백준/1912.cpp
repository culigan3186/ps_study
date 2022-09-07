#include <bits/stdc++.h>
using namespace std;

int dp[100001];
int seq[100001];

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,ans;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> seq[i];
    }
	
	dp[0] = seq[0];
	ans = dp[0];
    for(int i=1; i<n; i++)
    {
        dp[i] = max(dp[i-1] + seq[i], seq[i]);
        ans = max(ans, dp[i]);
    }
	cout << ans;

}
