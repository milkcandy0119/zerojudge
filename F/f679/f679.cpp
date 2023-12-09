#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,q;
    cin >> n >> q;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    
    for(int i=0;i<q;i++){
        ll top=n-1,bot=0,sn,found=0,ans;
        cin >> ans;
        while(top>=bot && found==0){
            sn=(top+bot)/2;
            if(a[sn]==ans){
                found=1;
                cout << "Yes\n";
            }
            else{
                if(a[sn]>ans) top=sn-1;
                else bot=sn+1;
            }
        }
        if(found==0) cout << "No\n";
    }
}