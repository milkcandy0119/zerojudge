#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,last,ans;
    cin >> n;
    int f[n];
    for(int i=0;i<n;i++){
        cin >>  f[i];
    }
    ans=(f[0]-1)*3;
    for(int i=1;i<n;i++){
        if(f[i]-f[i-1]<0)
            ans+=(abs(f[i]-f[i-1]))*2;
        else
            ans+=(f[i]-f[i-1])*3;
    }
    cout << ans; 
}