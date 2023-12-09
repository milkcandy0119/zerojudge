#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define F first
#define S second
#define pii pair<int, int>
#define ll long long
using namespace std;

int main(){
    int n;
    int sum[10]={0};
    int maxn = 0;
    for(int i=0;i<3;i++){
        cin >> n;
        sum[n]++;
        maxn = max(sum[n], maxn);
    }
    cout << maxn;

    for(int i=9;i>=0;i--){
        if(sum[i]) cout << " " << i ;
    }
}