#include<bits/stdc++.h>
using namespace std;
int a,b,n,ans,num;
int main(){   
    cin >> a >> b >> n;
    for(int i=0;i<n;i++){
        int f=0,s=0;
        while(1){
            cin >> num;            
            if(num==0) break;
            if(num==a) f++;
            else if(num==-a) f--;
            if(num==b) s++;
            else if(num==-b) s--;
        }
        if(f>0 && s>0) ans++;
    }
    cout << ans;
}