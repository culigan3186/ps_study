#include <bits/stdc++.h>
using namespace std;

long long x,n,a,b,total;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> x >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a >> b;
		total += a*b;
	}
	if(x==total) cout << "Yes";
	else cout << "No";
	
}
