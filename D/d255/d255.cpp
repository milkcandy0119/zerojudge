#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int n){
    while((m%=n) && (n%=m));
    return m+n;
}
int main(){
    int N,i,j,G;
    while(cin >> N){
        if(N==0) break;
        G=0;

        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                G+=gcd(i,j);
            }
        }
        cout << G << "\n";
    }
}