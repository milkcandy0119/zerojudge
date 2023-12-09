#include <bits/stdc++.h>
using namespace std;
int music(char a){
    if(a=='W') return 1;
    else if(a=='H') return(2);
    else if(a=='Q') return(4);
    else if(a=='E') return(8);
    else if(a=='S') return(16);
    else if(a=='T') return(32);
    else if(a=='X') return(64);
}
int main(){
    string s;
    while(cin >> s){
        if(s[0]=='*') break;
        int l=s.size();
        double sum=0;
        int ans=0;
        for(int i=0;i<l;i++){
            if(s[i]=='/'){
                if(sum==1) ans++;
                sum=0;
                continue;
            }
            double t=music(s[i]);
            sum+=(1/t);
            //cout << sum << " ";
        }
        //cout << "\n";
        cout << ans << "\n";
    }
}