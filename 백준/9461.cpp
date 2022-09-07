#include <bits/stdc++.h>
using namespace std;

long long arr[101];
long long dp(int N)
{
	if(N < 3) return arr[N] = 1;
	if(arr[N] !=0 ) return arr[N];
	else arr[N] = dp(N-2) + dp(N-3); 
	return arr[N];
}

int main()
{
	int t,p;
	cin >> t; 
	for(int i=0; i<t; i++)
	{
		cin >> p;
		cout << dp(p-1)<< '\n';
	}
	
}
