#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++){
        cout << int(a[i]);
        if(i<a.size()-1) cout << "_";
    }
}