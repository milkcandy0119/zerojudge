#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    while(n--){
        cin >> x;
        for(int i=2;i<x;i++){
            if(x%i==0){
                cout << "N\n";
                break;
            }
            if(i==x-1 && x%i!=0){
                cout << "Y\n";
                break;
            }
        }
    }
}