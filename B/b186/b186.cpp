#include <bits/stdc++.h>
using namespace std;
int main(){
    int cookie,chocolate,cake;
    while(cin >> cookie >> chocolate >> cake){
        int a=cookie,b=cake;
        bool ok=true;
        while(ok){
            if(a>=10 && b>=2){
                chocolate++;
                a-=10;
                b-=2;
            }
            else ok=false;
        }
        cout << cookie << " 個餅乾，" << chocolate << " 盒巧克力，" << cake << " 個蛋糕。\n";
    }
}