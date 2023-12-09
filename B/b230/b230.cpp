#include <bits/stdc++.h>
using namespace std;
#define MAX 2000
#define range 65
int main(){
    bool num[MAX]={0};
    int cn[66],k;
    for(int a=1;a<range;a++){
        for(int b=a+1;b<range;b++){
            for(int c=b+1;c<range;c++){
                if(a*b+b*c+c*a <= MAX) num[a*b+b*c+c*a] = true;
            }
        }
    }
    int c=1;
    for(int i=1;i<MAX;i++){
        if(num[i]==false) cn[c++] = i;
    }
    while(cin >> k) cout << cn[k] << "\n";
}