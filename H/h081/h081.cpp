//h081. 1. 程式交易 by.Milkcandy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,D,N[100],M,t=0;
    cin >> n >> D;
    for(int i=0;i<n;i++) cin >> N[i];
    M=N[0];
    bool a=true;
    for(int i=0;i<n;i++){
        if(a==true){
            if(N[i]>=M+D){
                t+=N[i]-M;
                M=N[i];
                a=false;
            }
        }
        if(a==false){
            if(N[i]<=M-D){
                M=N[i];
                a=true;
            }
        }
    }
    cout << t;
}