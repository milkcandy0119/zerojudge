#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    while(cin >> a){
        if(a=='0') break;
        int m=0;
        for(int i=0;i<a.size();i++){
            m+=a[i]-'0';
        }
        if(m%3==0) cout << "yes\n";
        else cout << "no\n";
    }  
}