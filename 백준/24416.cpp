#include <bits/stdc++.h>
using namespace std;

int arr[41]={1,1,};
int fib(int N)
{
	if(N==1 || N==2) return 1;
	else
	{
		return fib(N-1) + fib(N-2);	
	}
}
int fibonacci(int N)
{
	if(N==1 || N==2) return 1;
	int tmp;
	for(int i=3; i<N; i++)
	{
		arr[i] = fibonacci(i-1) + fibonacci(i-2);
	}
	return arr[N];
}
int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n);
}
