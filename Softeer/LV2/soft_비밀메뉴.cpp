#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("secret.txt", "r", stdin);
	int k, m, n, tmp, cnt;
	vector<int> secret_vec, button_vec;
	cin >> m >> n >> k;
	for(int i=0; i<m; i++)
	{
		cin >> tmp;
		secret_vec.push_back(tmp);
	}
	
	for(int j=0; j<n; j++)
	{
		cin >> tmp;
		button_vec.push_back(tmp);
	}
	bool secret = false;
	for(int i=0; i<n; i++)
	{
		if(button_vec.size() <= i+m-1) break;
		bool test = true;
		int k = 0; 
		for(int j=i; j<i+m; j++)
		{
			if(secret_vec[k] != button_vec[j])
			{
				test = false;
				break;
			}
			k++;
		}
		if(test)
		{
			secret = true;
			break;
		}
	}
	if(secret) cout <<"secret" << endl;
	else cout << "normal" << endl;
}
