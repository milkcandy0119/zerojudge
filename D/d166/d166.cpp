#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[51] = {0}, b[51] = {0};
    int n = 0, x;
    while(cin >> x){
        if(x == -1) break;
        a[n++] = x;
    }
    for(int i=0;i<n;i++){
        int cmp = a[i] + i;
        if(b[cmp] == 0) b[cmp] = i;
        
    }
}