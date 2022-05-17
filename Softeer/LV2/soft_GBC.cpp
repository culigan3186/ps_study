#include <bits/stdc++.h>
using namespace std;

int N,M,u,v,ans;
int main(){
    scanf("%d%d",&N,&M);
    vector<int> a,b;
    while(N--){
        scanf("%d%d",&u,&v);
        while(u--) a.push_back(v);  // 제한속도
    }
    while(M--){
        scanf("%d%d",&u,&v);
        while(u--) b.push_back(v);  // 실제속도
    }
    for(int i=0;i<100;i++) ans=max(ans,b[i]-a[i]);
    printf("%d",ans);
}