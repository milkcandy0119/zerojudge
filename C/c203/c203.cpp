#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> t;
    while(t--){
        cin >> n;
        int sum=0,i;
        for(i=1;i<n;i++){
            if(n%i==0) sum+=i;
        }
        if(sum==n) cout << "perfect\n";
        else if(sum > n) cout << "abundant\n";
        else cout << "deficient\n";
    }
}