#include <bits/stdc++.h>
using namespace std;

#define N 1000001
typedef pair<int, int> pii;
pii a[10001];

bool cmp(pii x, pii y){
    if (x.first==y.first) return x.second<y.second;
    else return x.first<y.first;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n){
        for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;
    }

    sort(a, a+n, cmp);

    int sum=a[0].second-a[0].first;
    int R=a[0].second;
    for (int i=1; i<n; i++){
        if (a[i].second>R){
            sum+=(a[i].second-a[i].first)-(R-a[i].first)*((R-a[i].first)>0);
            R=a[i].second;
        }
    }
    cout << sum <<endl;
}
