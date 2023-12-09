#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    int w[n];
    for(int i=0;i<n;i++){
        cin >> w[i];
        if(w[i]<=10) ans++;
    }
    cout << ans;
}