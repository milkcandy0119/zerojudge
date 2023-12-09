#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                if(a[j]%10<=a[j-1]%10){
                    if(a[j]%10==a[j-1]%10){
                        if(a[j]>a[j-1]) swap(a[j],a[j-1]);
                    }
                    else
                        swap(a[j],a[j-1]); 
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}