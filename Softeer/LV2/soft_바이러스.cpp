#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long k, p, n, final;
	cin >> k >> p >> n;
	for(int i=0; i<n;i++)
	{
		k=k*p;
		k=k%1000000007;
	}
	cout << k << endl;
}