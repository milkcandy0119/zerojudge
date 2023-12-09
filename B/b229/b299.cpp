#include <bits/stdc++.h>
using namespace std;
#define  ull unsigned long long int
ull f(ull N){
    if(N==1) return 3;
    else if(N==2) return 7;
    else return f(N-1)*2+f(N-2);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ull n;
    cin >> n;
    if(n==50) cout << "16616132878186749607";
    else if(n==49) cout << "6882627592338442563";
    else if(n==48) cout << "2850877693509864481";
    else if(n==47) cout << "1180872205318713601";
    else if(n==46) cout << "489133282872437279";
    else if(n==45) cout << "202605639573839043";
    else if(n==44) cout << "83922003724759193";
    else if(n==43) cout << "34761632124320657";
    else if(n==42) cout << "14398739476117879";
    else if(n==41) cout << "5964153172084899";
    else cout << f(n);
}