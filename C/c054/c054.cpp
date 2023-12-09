#include <bits/stdc++.h>
using namespace std;
 
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
    string S;
    int i, j;
    while (getline(cin, S)){
        int l=S.size();
        for (i=0; i<l; i++){
            for (j=1; s[j] && s[j] != S[i]; j++);
            if (s[j]) cout << s[j-1];
            else cout << S[i];
        }
        cout << "\n";
    }
}