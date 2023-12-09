#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int l=s.size(),tmp=0,sum=0,mx=0;
        for(int i=0;i<l;i++){
            if(s[i]==' ') tmp++;
            else{
                if(tmp){
                    mx=max(mx,tmp);
                    tmp=0;
                }
            }
        }
        int t=0;
        tmp=0;
        while(mx>1){
            mx=mx/2+mx%2;
            t++;
        }
        cout << t << "\n";
    }
}