#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    while(cin >> s1){
        bool ok=1;
        int len=s1.size();
        for(int i=0;i<len/2;i++){
            if(s1[i]!=s1[len-i-1]){
                ok=0;
            }
        }
        if(ok){
            cout << "yes\n";
        }
        else
            cout << "no\n";
    }
}