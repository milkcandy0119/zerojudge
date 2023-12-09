#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int brother,n,sister[10],c=1;
    bool peace = true;
    cin >> brother >> n;
    for(int i=0;i<n;i++){
        cin >> sister[i];
    }
    for(int i=0;i<n;i++){ //模擬猜拳回合
        cout << brother << " ";
        if((brother==0 && sister[i]==2) or (brother==2 && sister[i]==5) or (brother==5 && sister[i]==0)){//哥哥贏了
            cout << ": Won at round " << c;
            peace = false;
            break;
        }
        if((brother==0 && sister[i]==5) or (brother==2 && sister[i]==0) or (brother==5 && sister[i]==2)){//哥哥輸了
            cout << ": Lost at round " << c;
            peace = false;
            break;
        }
        if(sister[i]==sister[i-1] && i!=0){
            if(sister[i]==0) brother=5;
            else if(sister[i]==2) brother=0;
            else brother=2;
        }
        else brother=sister[i];
        c++;
    }
    if(peace == true){
        cout << ": Drew at round " << n;
    }
}