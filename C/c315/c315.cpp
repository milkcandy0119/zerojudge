#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    int x=0,y=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(a==0) y+=b;
        else if(a==1) x+=b;
        else if(a==2) y-=b;
        else x-=b;
    }
    cout << x << " " << y;
}