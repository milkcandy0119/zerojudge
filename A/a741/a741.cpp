#include <bits/stdc++.h>
using namespace std;

#define ll long long

void bn(int s){
    if(s >= 10000000){
        cout << s/10000000 << " kuti ";
        s %= 10000000;
    }
    if(s >= 100000){
        cout << s/100000 << " lakh ";
        s %= 100000;  
    }
    if(s >= 1000){
        cout << s/1000 << " hajar ";
        s %= 1000;  
    }
    if(s >= 100){
        cout << s/100 << " shata ";
        s %= 100;  
    }
    if(s!=0) 
        cout << s << " ";
}

int main(){
    ll s;
    int count = 1;
    while(cin >> s){
        cout << count++ << ". ";
        if(s == 0) cout << "0\n";
        else{
            if(s > 10000000){
                bn(s/10000000);
                s%=10000000;
                cout << "kuti ";
            }
            bn(s);
            cout << "\n";
        }
    }
}