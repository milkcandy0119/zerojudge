#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a<b;
}
int main(){
    int q,n,c=1;
    while(cin >> n >> q){
        if(n==0 && q==0) break;
        int rock[n],f[q],j;
        for(int i=0;i<n;i++) cin >> rock[i];
        for(int i=0;i<q;i++) cin >> f[i];
        sort(rock,rock+n,cmp);
        cout << "CASE# " << c << ":\n";
        for(int i=0;i<q;i++){
            bool fid=0;
            for(j=0;j<n;j++){
                if(f[i]==rock[j]){
                    cout << f[i] << " found at " << j+1 << "\n";
                    fid=1;
                    break;
                }
            }
            if(fid==0){
                cout << f[i] << " not found\n";
            }
        } 
        c++;
    }
}