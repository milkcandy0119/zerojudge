#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f){
        if(a*e==d*b){
            if(a*f==c*d)cout << "Too many\n";
                else cout << "No answer\n";
        }
        else{
            double x=(c*e-b*f)/(a*e-b*d);
            double y=(c*d-a*f)/(b*d-a*e);
            cout << "x=" << fixed << setprecision(2) << x << endl;
            cout << "y=" << fixed << setprecision(2) << y << endl;
        }
    }
}