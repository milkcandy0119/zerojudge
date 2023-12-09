#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,sum;
    while(cin >> a){
        sum = a;
        while(1){
            sum+=a/3;
            if(a<3) break;
            a=(a/3+a%3);
        }
        if(a==2) sum++;
        cout << sum << "\n";
    } 
}