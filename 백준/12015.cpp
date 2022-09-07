#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    freopen("12015_input.txt","rt",stdin);
    int n,tmp,cnt=0;
    scanf("%d",&n);
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1]) continue;
        else{
            cnt++;
        }
    }

    printf("%d",cnt+1);
}