#include <bits/stdc++.h>
using namespace std;
int main() {
    string n, k;
    cin >> n >> k;
    bool tmp = false ;
    if (stoi(n) % stoi(k) == 0) {
        cout << "YES" << endl;
        tmp = true;
    }
    else{
        for (int i = 0; i < n.length(); i++) {
            if (n[i] == k[0]) {
                cout << "YES" << endl;
                tmp = true;
                break;
            }
        }
    }
    if(!tmp) cout << "NO\n";
}