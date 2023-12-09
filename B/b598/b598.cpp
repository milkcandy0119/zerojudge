#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define F first
#define S second
#define pii pair<int, int>
#define ll long long
using namespace std;

int main(){
    string s, s1;
    vector<int> coins;
    int price;
    while(getline(cin, s) && s != "0"){
        coins.clear();
        cin >> price;
        cin.ignore();
        int n;
        stringstream ss(s);
        while(ss >> n){
            coins.push_back(n);
        }
        sort(coins.begin(), coins.end());

        int count[price+1][coins.size()];
        int dp[price+1];
        memset(dp, 0x3F, sizeof(dp));
        memset(count, 0, sizeof(count));
        dp[0] = 0;
        for(int i=0;i<coins.size();i++){
            for(int j=coins[i];j<=price;j++){
                // cout << "i:"<< i << " ,j:"<< j << " , dp[j]=" << dp[j] << ", coins[i]=" << coins[i] << ", dp[j - coins[i]]+1=" << dp[j - coins[i]]+1 << "\n";
                if(dp[j] < dp[j - coins[i]]+1){
                    // count[j][i] = dp[j];
                }else{
                    count[j][i] = dp[j - coins[i]]+1;
                    dp[j] = dp[j - coins[i]]+1;
                }
            }
        }
        if(dp[price] < 0x3F3F3F3F) cout << dp[price] << "\n";
        else cout << 0 << "\n";
    }
}
