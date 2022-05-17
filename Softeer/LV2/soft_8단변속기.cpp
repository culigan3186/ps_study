#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    cin.tie(0);

    int tmp,m=0;
    vector<int> v;
    for(int i=0;i<8;i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    for(int i=1;i<8;i++)
    {
        if(v[i-1]-v[i]==1) // descending
        {
            m+=1;
        }
        else if(v[i]-v[i-1]==1) // ascending
        {
            m-=1;
        }
    }
    if(m==-7) cout << "ascending"<<endl;
    else if(m==7) cout << "descending" << endl;
    else cout <<"mixed"<<endl;
}
