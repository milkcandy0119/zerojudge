#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,tmp1=0,tmp2=0,tmp3=0;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
        if(num[i]%3==0) tmp1++;
        if(num[i]%3==1) tmp2++;
        if(num[i]%3==2) tmp3++;
    } 
    cout << tmp1 << " " << tmp2 << " " << tmp3;    
}