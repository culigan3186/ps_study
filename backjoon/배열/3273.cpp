#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,x;
    int cnt=0;
    vector<int> v;
    std::vector<int>::iterator  it;
    cin >> n;
    int start=0,end=n-1;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >>x;
    sort(v.begin(),v.end());
    while(start<end)
    {
        if(v.at(start)+v.at(end) == x){
            cnt++;
            end--;
        }
        else if(v.at(start)+v.at(end) >x) end--;
        else start++;
    }

    cout << cnt;
}


/* 시간초과
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n,a,x;
    int cnt=0;
    vector<int> v;
	cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >>x;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i]+v[j] == x) {
            	cnt++;
            	v.erase(v.begin()+j);
            	n--;
			}

        }
    }
    cout << cnt;
}
*/

