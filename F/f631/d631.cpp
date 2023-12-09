#include<bits/stdc++.h>
using namespace std;

#define fastcin ios::sync_with_stdio(0),cin.tie(0)
#define ll long long

int n,m;
ll x;
priority_queue<ll> money;
vector<ll> food(10000);

int main(){
    fastcin;
    while(cin >> n >> m){
        while(!money.empty()) money.pop();
        food.resize(m);
        for(int i=0;i<n;i++){
            cin >> x;
            money.push(x);
        } 
        ll ans1 = money.top();
        for(int i=0;i<m;i++) cin >> food[i];
        bool nomoney = 0;
        for(int i=0;i<m && !nomoney;i++){
            while(food[i]>money.top()){
                if(money.top() <= 0){
                    nomoney = 1;
                    break;
                }
                else{
                    food[i]-=money.top();
                    money.pop();
                    money.push(0);
                }
            }
            ll t=money.top() - food[i];
            money.pop();
            money.push(t);
        }
        if(nomoney) cout << "Oh My God\n";
        else cout << ans1 << " " << money.top() << "\n";
    }
}
