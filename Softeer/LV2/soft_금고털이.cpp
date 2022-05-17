#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w, n, m, p, ans = 0;
    vector<pair<int,int>> v;
    cin >> w >> n;

    for(int i=0; i<n; i++)
    {
        cin >> m >> p;
        v.push_back(make_pair(m,p));
    }

    sort(v.begin(),v.end(),comp);
    for(int i=0; i<n; i++)
    {
        if(w > v[i].first)
        {
            ans += v[i].first * v[i].second;
            w -= v[i].first;
        }
        else
        {
            ans += w * v[i].second;
            break;
        }
    }
    cout << ans;
}