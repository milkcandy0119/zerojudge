#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        int l=s.size();
        if(l==3){
            int one=0,two=0;
            if(s[0]=='o') one++;
            else if(s[0]=='t') two++;
            if(s[1]=='n') one++;
            else if(s[1]=='w') two++;
            if(s[2]=='e') one++;
            else if(s[2]=='o') two++;

            if(one>two) cout << "1\n";
            else cout << "2\n";
        }
        else cout << "3\n";
    }
}