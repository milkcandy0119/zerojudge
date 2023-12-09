#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin >> n;
    for(int i=0;i<n;i++){
        int sum=0;
        cin >> a >> b;
        for(int j=1;j<=b;j++){
            if((j*j)>=a && (j*j)<=b) sum+=(j*j);
        }
        cout << "Case " << i+1 << ": " << sum << "\n";
    }
}