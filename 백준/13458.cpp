#include <iostream>
#include <vector>

using namespace std;

int n, a, b, c;
int tmp;
long long cnt;

vector<int> v;
int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> 	tmp;
		v.push_back(tmp);
	}
	cin >> b >> c;
	
	for(int i=0;i<n;i++)
	{
		cnt++;
		if(v[i]-b>0) 
		{
			if((v[i]-b)%c==0)
			{
				cnt+=((v[i]-b)/c);
			}
			else
			{
				cnt+=1;
				cnt+=((v[i]-b)/c);
			}
		}	
	}
	cout << cnt;
		
}
