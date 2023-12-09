#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define f first
#define s second

int t;
pair<string,int> str[10];
//str[0].first , str[0].second
//pair<string,string>
int main(){
    fast;
    cin >> t;
    int  count = 1;
    while(t--){
        cout << "Case #" << count << ":\n";
        int max = 0;
        for(int i=0;i<10;i++){
            cin >> str[i].f >> str[i].s;
            if(str[i].s > max) max=str[i].s;
        }
        for(int i=0;i<10;i++){
            if(str[i].s == max) cout << str[i].f << "\n";
        }
        count++;
    }
}

