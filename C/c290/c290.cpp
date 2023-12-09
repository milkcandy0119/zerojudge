#include<bits/stdc++.h>
using namespace std;
int main(){
    int A = 0, B = 0;
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++){
        if (i % 2){
            B += s[i] - '0';
        } else {
            A += s[i] - '0';
        }
    }
    cout << abs(A - B) << "\n";
}