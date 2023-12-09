#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n%2==0){
            if(k%n==0) cout << n << "\n";
            else cout << k%n << "\n";
        }
        else if(n==1) cout << n <<"\n";
        else if(n==3){
            if(k%n==0) cout << 2 << "\n";
            else if(k%n==1) cout << 1 << "\n";
            else cout << 3 << "\n";
        }
        else if()
    }
}