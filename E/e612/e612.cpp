#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t%3==2 or t%3==0) cout << "YES\n";
        else cout << "NO\n";
    }   
}
