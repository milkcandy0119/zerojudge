#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,id=4,i=2;
    cin >> n;
    for(;id<n;i++){
        id+=4*i;
    }
    i-=1;
    if(n>id-i)
        cout << "Pineapple pen";
    else if(n>id-i*2)
        cout << "Apple";
    else if(n>id-i*3)
        cout << "Pineapple";
    else
        cout << "Pen";
}