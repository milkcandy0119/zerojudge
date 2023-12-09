#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int ans=0;       
        for(int a=2;a<=n;a++){
            int num=0;
            for(int i=2;i<=a;i++){
                int b=0;
                if(a%i==0){
                    a=a/i;
                    b++;
                }
                if(b!=0) num+=i;
            }
            if(ans==n) ans=max(ans,num);
        }
        cout << ans << "\n";
    }
}