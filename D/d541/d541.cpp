#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define F first
#define S second
#define pii pair<int, int>
#define ll long long
#define fori for(int i=0;i<n;i++)
using namespace std;

int main(){
    int n, m;
    int right, left;
    while(cin >> n >> m){
        int a[n];
        fori a[i] = i+1;
        while(m--){
            cin >> left >> right;
            reverse(a + (left - 1), a + right);
        }
        for(auto d : a) cout << d << " ";
        cout << "\n";
    } 
}
