#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1,b1,c1,a2,b2,c2,n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    int ans=INT_MIN;
    for(int x1=0;x1<=n;x1++){
        int x2=n-x1;
        int y1=a1*pow(x1,2)+b1*x1+c1;
        int y2=a2*pow(x2,2)+b2*x2+c2;
        ans=max(ans,y1+y2);
    }
    cout << ans;
}