#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, k, m;
int tmp, target_num;
vector<int> v;

int main()
{
    cin >> n >> k >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if((i+1)==k) target_num = tmp; // order 
    }
    for(int i=1; i<=n; i++)
    {
    	v.push_back(i);
	}
    for(int i=0; i < m; i++)
    {
        cin >> tmp;
        if(tmp>0)
        {
            reverse(v.begin(),v.begin()+tmp);
        }
        else
        {
            reverse(v.end()+tmp,v.end());
        }
    }
	cout << find(v.begin(), v.end(), k) - v.begin() + 1;
}
