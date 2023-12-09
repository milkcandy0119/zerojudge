#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z,w,n,m,t;
    cin >> t;
    while(t--){
        cin >> x >> y >> z >> w >> n >> m;
        string s;
        getline(cin,s);
        getline(cin,s);
        int l=s.size();
        if(l==0){
            cout << m << "g\n";
            continue;
        }
        stringstream ss(s);
        int c,b=0;
        bool dead=false;
        while(ss >> c){
            m-=b*n;
            if(m<=0){
                dead=true;
                break;
            }
            if(c==1) m+=x;
            else if(c==2) m+=y;
            else if(c==3) m-=z;
            else if(c==4){
                m-=w;
                b++;
            }
            if(m<=0){
                dead=true;
                break;
            }

        }
        if(dead) cout <<"bye~Rabbit\n";
        else cout << m << "g\n";
    }
}