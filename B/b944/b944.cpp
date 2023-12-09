#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define F first
#define S second
#define pii pair<int, int>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    int num[n+2]={0}, time[n+1]={0};
    while(cin >> a >> b){
        bool op = false;
        for(int i=1;i<=n;i++){
            if(num[i] && time[i] != 0){
                time[i]--;
            }
        }
        for(int i=1;i<=n;i++){
            if(num[i] == 0 || (num[i] != 0 && time[i] == 0)){ //空位
                if(num[i-1] != 0){ //隔壁有人
                    if(num[i+1] == 0){ //還有位置嗎?
                        num[i+1] = a;
                        time[i+1] = b;
                        op = true;
                        break;
                    }else continue;
                }else{ //隔壁沒人
                    num[i] = a;
                    time[i] = b;
                    op = true;
                    break;
                }
            }
        }
        if(!op){
            for(int i=1;i<=n;i++){
                if(num[i] == 0 || (num[i] != 0 && time[i] == 0)){
                    num[i] = a;
                    time[i] = b;
                    op = true;
                    break;
                }
            }
        }
        if(!op) cout << "  Not enough\n";
        cout << "Number: ";
        for(int i=1;i<=n;i++){
            cout << num[i];
            if(i != n) cout << " ";
        }
        cout << "\n  Time: ";
        for(int i=1;i<=n;i++){
            cout << time[i];
            if(i != n) cout << " ";
        }
        cout << "\n";
    }

}