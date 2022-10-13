#include <bits/stdc++.h>
using namespace std;

int N;
int ring[10];

int gcd(int a, int b)
{
	int c;
	while (b!=0)
	{
		c = a% b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	cin >> N;
	for (int i=1; i<=N; i++)
	{
		cin >> ring[i];
	}
	int std = ring[1];
	for (int i=2;i<=2;i++)
	{
		int g = gcd(std,ring[i]);
		cout << std/g << '/' << ring[i]/g << '\n';
	}
}
