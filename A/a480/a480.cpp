#include <bits/stdc++.h>
using namespace std;

struct box{
    int d1,d2;
};

bool comp( box a, box b ){
    return(a.d1<b.d1);
}

int main(){
    ios::sync_with_stdio(0); 
    std::cin.tie(0);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int n;
    cin>>n;

    box dis[n];
    int tx,ty;
    for(int i=0;i<n;i++){
        cin>>tx>>ty;
        dis[i].d1=(x1-tx)*(x1-tx)+(y1-ty)*(y1-ty);
        dis[i].d2=(x2-tx)*(x2-tx)+(y2-ty)*(y2-ty);
    }
    sort(dis,dis+n,comp);
    for(int i=n-2;i>=0;i--)
        dis[i].d2=max(dis[i].d2,dis[i+1].d2);
    int ans=2147483647;
    for(int i=0;i<n;i++){
        int p=dis[i].d1;
        int temp=0;
        if(i!=n-1) temp=dis[i+1].d2;
        p += temp;
        ans=min(ans,p);
    }
    ans = min(ans , dis[0].d2);
    cout<<ans;
}