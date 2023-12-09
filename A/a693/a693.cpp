#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x,y;
    while(cin >> n >> m){
        int sum[n+1],a[n],total;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum[i]=total;
            total+=a[i];
        } 
        sum[n]=total;
        int x,y;
        for(int i=0;i<m;i++){
            cin >> x >> y;
            int ans=sum[y]-sum[x-1];
            cout << ans << "\n";
        }
        
    }
}