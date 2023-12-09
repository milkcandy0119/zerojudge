#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int sum1=0;
        for(int i=0;i<3;i++){
            sum1+=(s[i]-'A')*(int)pow(26,2-i);
        }
        int sum2=0;
        for(int i=4;i<8;i++){
            sum2*=10;//進位
            sum2+=s[i]-'0';
        }
        if(abs(sum1-sum2)<=100) cout << "nice\n";
        else cout << "not nice\n";
    }
}