#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a<b;
}
int main(){
    int n;
    while(cin >> n){
        if(n==0) break;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}