#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
const double EPS = 1e-7;

int main(){
    int k;
    cin >> k;
    int s,t,miss=0;
    int max_time=0,max=-2;
    for(int i=0;i<k;i++){
        cin >> s >> t;
        if(t==-1) miss++;
        if(t>max){
            max=t;
            max_time=s;
        } 
    }
    if(max<0) max=0;  
    int sum=max-k-miss*2;
    if(sum<0) sum=0;
    cout << sum << " " << max_time;
}
