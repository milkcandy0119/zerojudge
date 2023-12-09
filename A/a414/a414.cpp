#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int n;
    while(cin >> n){
        if(n==0) break;
        int count=0;
        while(n%2!=0){
            n/=2;
            count++;
        }
        cout << count << "\n";
    }
}