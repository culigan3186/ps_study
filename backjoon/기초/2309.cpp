#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	
  	int a[9];
  	int sum=0;
  	int first;
	int last;
  	for(int i=0;i<9;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+9);
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			if((sum-100)==(a[i]+a[j])){
					first = i;
					last =j;	
				}	
			}
	}
	for(int i=0;i<9;i++){
		if(i==first) continue;
		else if(i==last) continue;
		else{
			cout<<a[i]<<endl;
		}
	
}}

