#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,x,y,ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> x >> y;
    for(;a<=b;a++){
        if(a%x==0 or a%y==0)
            ans++;
    }
    cout << ans;
}

