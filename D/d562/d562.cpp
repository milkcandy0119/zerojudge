#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define F first
#define S second
#define pii pair<int, int>
#define ll long long
#define fori for(int i=0;i<n;i++)
using namespace std;

int main(){
    vector<int> v;
    int n;
    while(cin >> n){
        v.clear();
        int num;
        fori{
            cin >> num;
            v.push_back(num);
        }
        while(n--){
            for(int x : v) cout << x << " ";
            cout << "\n";
            reverse(v.begin(),v.end());
            v.pop_back();
        }
    }
}