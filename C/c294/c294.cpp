#include<bits/stdc++.h>
using namespace std;
#define A "Obtuse"
#define B "Right"
#define C "Acute"
#define D "No"
int main(){
    int side[3];
    for(int i=0;i<3;i++){
        cin>>side[i];
    }
    sort(side,side+3);
    for(int i=0;i<3;i++){
        cout<<side[i]<<" ";
    }
    cout<<endl;
    if(side[0]+side[1]<=side[2]){
        cout<<D;
    }
    else if ((side[0]*side[0])+(side[1]*side[1])<side[2]*side[2])
    {
        cout<<A;
    }
    else if ((side[0]*side[0])+(side[1]*side[1])==side[2]*side[2])
    {
        cout<<B;
    }
    else if ((side[0]*side[0])+(side[1]*side[1])>side[2]*side[2])
    {
        cout<<C;
    }
}