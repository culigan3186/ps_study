#include <iostream>
using namespace std;

int main(){
	int n, k, s, g;
	int arr[2][6]={};
	int sum=0;
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		cin	>> s >> g;
		arr[s][g-1]++;
	}

	for(int i=0;i<6;i++)
	{
		sum += arr[0][i]/k;
		if(arr[0][i]%k!=0) sum++;
	}

	for(int i=0;i<6;i++)
	{
		sum += arr[1][i]/k;
		if(arr[1][i]%k!=0) sum++;
	}
	cout << sum;
}
