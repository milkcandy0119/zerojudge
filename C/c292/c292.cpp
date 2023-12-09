#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,op;
    cin >> n >> op;
    int num[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> num[i][j];
        }
    }
    int x=(n-1)/2,y=x;
    cout << num[x][y];
    for(int i=1;i<n;i++) 
    {
        for(int j=0;j<(i==n-1 ? 3 : 2);j++) //time
        {
            for(int k=0;k<i;k++)
            {
                if(op==0) x-=1;
                else if(op==1) y-=1;
                else if(op==2) x+=1;
                else if(op==3) y+=1;
                cout << num[y][x];
            } 
            op++;
            if(op==4) op=0;
        }
    }
}
