#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int F(ll x)
{
    return (2*x-3);
}

int G(ll x,ll y)
{
    return (2*x+y-7);
}

int H(ll x,ll y,ll z)
{
    return (3*x-2*y+z);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string> str;
    vector<ll> num;
    string s;
    while(cin >> s) str.push_back(s);

    int n=str.size();
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]=='f')
        {
            int a;
            a=str.top();
            str.pop();
            str.push(F(a));
        }
        if(str[i]=='f')
        {
            int a;
            a=str.top();
            str.pop();
            b=str.top();
            str.pop();
            
        }
    }
}






