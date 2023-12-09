#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll m,n,t;
    cin >> t;
    for(int k=0;k<t;k++){
        cin >> m;
        if(m%2==0) n=m/2;
        else n=m/2+1;
        ll h[n]={0},c=0;
        for(int i=1;i<=m;i++){
            if(i%2==1){
                h[c++]=i;
            } 
        }

        ll arr[m+1]={0};
        arr[0]=1;
        for(int i=0;i<n;i++){
            for(int j=h[i];j<m+1;j++)
                arr[j] = arr[j] + arr[j - h[i]];
        }
        cout << arr[m] << "\n";
    }
    
}


