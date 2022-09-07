#include <bits/stdc++.h>
using namespace std;

int num, t;

int dp(int N)
{
	if(N==1) return 1;
	else if(N==2) return 2;
	else if(N==3) return 4;
	else
	{
		return dp(N-1) + dp(N-2) + dp(N-3);
	}
}
int main()
{
	cin >> t;
	for(int i=0; i<t; i++)
	{
		cin >> num;
		cout << dp(num) << '\n';
	}
	return 0;
}
