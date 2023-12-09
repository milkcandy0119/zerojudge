#include <iostream>
#include <cmath>
using namespace std ;
int main() {
int a,b;
while(cin>>a>>b){
int sum=0;
for(int i=a; i<=b; i++){
int flag=1;
for(int j=2; j<=sqrt(i); j+=(j==2?1:2))
if(i%j==0) {flag=0; break;}
if(i!=1&&flag==1) sum++;
}
cout<<sum<<endl;
}
return 0;
}