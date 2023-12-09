#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000000
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int s, t, m, n, r;
int Y[11][101];
int X[11][101];
 
int R(int r, int c){ //判斷差距
    int rt = 0;
    for (int i=r; i<r+s; i++){
        for (int j=c; j<c+t; j++){
            rt += (X[i][j] != Y[i-r][j-c]);
        }
    }
    return rt;
}
 
int Plus(int r, int c){ //相加
    int sum1 = 0, sum2 = 0;
    for (int i=r; i<r+s; i++){
        for (int j=c; j<c+t; j++){
            sum1 += X[i][j];
            sum2 += Y[i-r][j-c];
        }
    }
    return abs(sum1 - sum2);
}
 
int main() {
    fastio;
    cin >> s >> t >> n >> m >> r;
    for (int i=0; i<s; i++){ //小矩陣
        for (int j=0; j<t; j++){
            cin >> Y[i][j];
        }
    }
    for (int i=0; i<n; i++){ //大矩陣
        for (int j=0; j<m; j++){
            cin >> X[i][j];
        }
    }
    int d = 0;
    int k = MAX;
    for (int i=0; i<=n-s; i++){
        for (int j=0; j<=m-t; j++){
            if (R(i, j) <= r){
                d++;
                k = min(k, Plus(i, j));
            }
        }
    }
    cout << d << '\n';
    if (d == 0) 
		cout << "-1\n";
    else
		cout << k ;
}
//s*t小矩陣
//n*m大矩陣
//r差距