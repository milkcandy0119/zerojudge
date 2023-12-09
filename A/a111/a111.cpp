#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(n==0)
            break;
            int ans=0;
        for(int i=1;i<=n;i++){
            ans+=pow(i,2);
        }
        cout << ans << "\n";
    }
}