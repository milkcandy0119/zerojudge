#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define F first
#define S second
#define pii pair<int, int>
#define ll long long
using namespace std;

int main(){
    int m,n;
    while(cin >> m >> n){
        int arr[m][n];
        int hight[m][n];
        memset(hight, 0, sizeof(hight));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> arr[i][j];
            }
        }
        // cout << "==========\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == 0) hight[i][j] = arr[i][j];
                else{
                    hight[i][j] = arr[i][j] + hight[i-1][j]*arr[i][j];
                }
            }
        }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //        cout << hight[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        // cout << "==========\n";
        int maxmum = 0;
        for(int i=0;i<m;i++){
            for(int j=n-1;j>=0;j--){
                int t = j-1;
                int minmum = hight[i][j];
                maxmum = max(maxmum, minmum);
                while(t >= 0 && hight[i][t] >= 1){
                    minmum = min(hight[i][t], minmum);
                    t--;
                    maxmum = max(maxmum, minmum*(j-t));
                }
            }
        }
        cout << maxmum << "\n";
    }
    
}
/*
4 5
0 0 1 1 0
0 1 1 1 1
0 1 1 1 1
0 0 1 0 0
*/