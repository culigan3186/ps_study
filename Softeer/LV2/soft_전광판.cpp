#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10][7] =
	{
		{1,1,1,0,1,1,1}, // 0 
		{0,0,1,0,0,1,0}, // 1
		{0,1,1,1,1,0,1}, // 2
		{0,1,1,1,0,1,1}, // 3
		{1,0,1,1,0,1,0}, // 4
		{1,1,0,1,0,1,1}, // 5
		{1,1,0,1,1,1,1}, // 6
		{1,1,1,0,0,1,0}, // 7
		{1,1,1,1,1,1,1}, // 8
		{1,1,1,1,0,1,1}  // 9
	};
	int t, a, b,cnt;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		cnt = 0;
		cin >> a >> b;
		while(a!=0 || b!=0)
		{
			if(a!=0 && b!=0 && arr[a%10][0]!= arr[b%10][0]) cnt++;
			if(a!=0 && b!=0 && arr[a%10][1]!= arr[b%10][1]) cnt++;
			if(a!=0 && b!=0 && arr[a%10][2]!= arr[b%10][2]) cnt++;
			if(a!=0 && b!=0 && arr[a%10][3]!= arr[b%10][3]) cnt++;
			if(a!=0 && b!=0 && arr[a%10][4]!= arr[b%10][4]) cnt++;
			if(a!=0 && b!=0 && arr[a%10][5]!= arr[b%10][5]) cnt++;
			if(a!=0 && b!=0 && arr[a%10][6]!= arr[b%10][6]) cnt++;
			
			else if(a==0)
			{
				if(arr[b%10][0]==1) cnt++;
				if(arr[b%10][1]==1) cnt++;
				if(arr[b%10][2]==1) cnt++;
				if(arr[b%10][3]==1) cnt++;
				if(arr[b%10][4]==1) cnt++;
				if(arr[b%10][5]==1) cnt++;
				if(arr[b%10][6]==1) cnt++;
				
			}
			else if(b==0)
			{
				if(arr[a%10][0]==1) cnt++;
				if(arr[a%10][1]==1) cnt++;
				if(arr[a%10][2]==1) cnt++;
				if(arr[a%10][3]==1) cnt++;
				if(arr[a%10][4]==1) cnt++;
				if(arr[a%10][5]==1) cnt++;
				if(arr[a%10][6]==1) cnt++;
				
			}
			a/=10;
			b/=10;
		}
		cout << cnt << endl;
	}
}
