#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int alpha1[26]={};
	int alpha2[26]={};
	int sum=0;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	
	
	for(int i=0;i<a.size();i++)
	{
		alpha1[a[i]-'a']++;	
	}
	for(int i=0;i<b.size();i++)
	{
		alpha2[b[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(alpha1[i]!=alpha2[i])
		{
			sum+=abs(alpha1[i]-alpha2[i]);
		}
	}
	cout << sum;
}

