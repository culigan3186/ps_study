#include <iostream>
#include <vector>
#include <algorithm>
int n;
using namespace std;
int Count(int len,int a[])
{
    int i, cnt=1, pos=a[1];
    for(int i=2;i<=n;i++)
    {
        if(a[i]-pos>=len){
            cnt++;
            pos=a[i];
        }
    }
    return cnt;
}

int main()
{
    // freopen("2110_input.txt","rt",stdin);
    int c,lt,rt,mid,tmp,res;
    scanf("%d %d",&n, &c);
    // std::vector<int> a(n);
    int *a =new int[n+1];
    for(int i=1;i<=n;i++)
    {   
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    lt = 1;
    rt = a[n];
    while(lt<=rt)
    {  
        mid = (lt+rt)/2;
        if(Count(mid,a)>=c)
        {
            res=mid;
            lt=mid+1;
        }
        else rt = mid-1;
    }
    delete[] a;
    printf("%d\n",res);
    return 0;
}