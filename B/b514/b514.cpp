#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,d,e,f;
    cin >> n;
    while(n--){
        cin >> a >> b >> c >> d >> e >> f;
        /*
        ax+by=c
        dx+ey=f
        x=(c-by)/a
        d((c-by)/a)+ey=f
        y=fa-dc/(ae-db)
        x=(c-(fa-dc/ae-db)b)/a
        */
       int x,y;
       if(a==0){
        y=c/b;
        x=(f-(y*e))/d;
       }
       else if(b==0){
        x=c/a;
        y=((f*a)-(d*c))/((a*e)-(b*d));
       }
       else if(d==0){
        y=c/e;
        x=(c-(y*b))/a;
       }
       else if(e==0){
        x=c/d;
        y=((f*a)-(d*c))/((a*e)-(b*d));
       }
       if(!(a==0 || b==0 || c==0 || d==0)){
        y=((f*a)-(d*c))/((a*e)-(b*d));
        x=(c-y*b)/a;
       }
       
       cout << x << " " << y <<"\n";
    }
}