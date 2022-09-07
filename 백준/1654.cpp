#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int k,n,lt,rt,mid,tmp,sum=0;
    scanf("%d %d",&k, &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        sum+=tmp;
    }
    printf("%d",sum);
    lt = 0;
    rt = sum/n;
    
}