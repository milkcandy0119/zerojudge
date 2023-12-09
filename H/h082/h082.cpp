#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int m,n;
    cin >> n >> m;
    vector<ll> s(n+1),t(n+1);
    for(int i=1;i<=n;i++) cin >> s[i];
    for(int i=1;i<=n;i++) cin >> t[i];
    vector<int> id(n),n_lose(n+1,0);
    for(int i=0;i<n;i++) cin >> id[i];
    while(id.size() > 1){
        vector<int> winner,loser;
        for(int i=0;i+1<id.size();i+=2){
            int win=id[i],lose=id[i+1];
            if(s[win]*t[win] < s[lose]*t[lose])
                swap(win,lose);
            ll a=s[win],b=t[win],c=s[lose],d=t[lose];
            s[win]+=c*d/(2*b);
            t[win]+=c*d/(2*a);
            winner.push_back(win);
            s[lose]+=c/2;
            t[lose]+=d/2;
            if(++n_lose[lose] < m)
                loser.push_back(lose);
        }
        if(id.size()%2==1) winner.push_back(id[id.size()-1]);
        id.swap(winner);
        id.insert(id.end(),loser.begin(),loser.end());
    }
    cout << id[0];

}
