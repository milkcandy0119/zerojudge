#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef pair<int, int> pii;
pii p[100001];

bool cmp(pii i, pii j){
    if (i.f==j.f) return i.second<j.second;
    else return i.first<j.first;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        for(int i=0;i<n;i++) cin >> p[i].f >> p[i].s;
        sort(p,p+n,cmp);
        for(int i=0;i<n;i++) cout << p[i].f <<" "<< p[i].s << "\n";
    }
}

