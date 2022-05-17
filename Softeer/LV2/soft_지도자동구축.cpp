#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	int n,ans,tmp=2;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		tmp = 2*tmp-1;
	}
	cout << tmp*tmp << endl;
}
