#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,lv=1;
    cin >> n >> m;
    int d[n],h[n];
    for(int i=0;i<n;i++) cin >> d[i];
    for(int i=0;i<n;i++) cin >> h[i];
    for(int i=0;i<n;i++){
        m-=d[i];
        if(m<0){
            cout << lv;
            break;
        } 
        m+=h[i];
        lv++;
    }
}