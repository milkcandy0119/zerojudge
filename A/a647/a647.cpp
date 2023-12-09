#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long double p,m,sum;
        cin >> p >> m;
        sum=round(((m/p)-1)*10000)/100;
        if(sum>=10 || sum<=-7) 
            cout << setprecision(2) << fixed << sum << "% " << "dispose\n";
        else cout << setprecision(2) << fixed << sum << "% " << "keep\n";
    }
}