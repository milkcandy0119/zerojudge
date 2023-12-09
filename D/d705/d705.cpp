#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define F first
#define S second
#define pii pair<int, int>
#define ll long long
using namespace std;

const int MAX = 46342; //sqrt(2∧31-1)=46341 
int p[MAX],cmp;

/*
(2~√n) / n
*/
int main(){
    fastio;
    int n;
    for(int i=2;i<MAX;i++){
        if(!p[i]){
            for(int j=i*2;j<MAX;j+=i){
                p[j] = 1;
            }
        }
    }
    for(int i=2;i<MAX;i++){
        if(!p[i]){
            p[cmp++] = i;
        }
    }
    while(cin >> n){
        if(n == 0) return 0;
        if(n == 1) cout << "1\n";
        else{
            int sq = sqrt(n);
            bool prime = true;
            for(int i=0;p[i]<=sq;i++){
                if(n%p[i] == 0){
                    prime = false;
                    break;
                }
            }
            if(prime) cout << "0\n";
            else cout << "1\n";
        }
     
    }
}
