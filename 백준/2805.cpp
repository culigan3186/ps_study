#include <iostream>
#include <vector>
#include <algorithm>
int lt,rt,mid,tmp,max=0,maxx=0;
long long n,m,sum=0;
std::vector<int> a;

int main()
{
    // freopen("2805_input.txt","rt",stdin);
    
    scanf("%d %d",&n, &m);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        a.push_back(tmp);
        if(tmp >=maxx) maxx = tmp;
    }
    lt=0;
    rt=maxx;
    // printf("%d",rt);
    sort(a.begin(),a.end());
    while(lt<=rt)
    {
        sum=0;
        mid=(lt+rt)/2;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mid)
                sum+=a[i]-mid;
        }
        if(sum>=m)
        {
            if(max<mid)
                max=mid;
            lt=mid+1;
        }
        else{
            rt =mid-1;
        }
    }
    printf("%d",max);
    return 0;
}