//e456. Ten little Indians 2023/10/30
//author: milkcandy
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i=0;i<s.size();i++){
        if(s[i] == ' ') cout << " little, ";
        else cout << s[i];
    }
    cout << " little Indians\n";
}
//2ms, 332KB
//O(n)