#include <bits/stdc++.h>
using namespace std;

int main(){
    int f[4]={1,3,6,4};
    int s[4]={1,5,6,2};
    int n,m;
    cin >> n >> m;
    int dicef[n][4],dices[n][4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            dicef[i][j]=f[j];
            dices[i][j]=s[j];
        }
    }
    
    for(int i=0;i<m;i++)
    {
        int a,op;
        cin >> a >> op;
        a-=1;
        if(op==-1) //f
        {
            for(int i=0;i<3;i++) swap(dicef[a][i],dicef[a][i+1]);
            dices[a][0]=dicef[a][0];
            dices[a][2]=dicef[a][2];
        }
        if(op==-2) //s
        {
            for(int i=0;i<3;i++) swap(dices[a][i],dices[a][i+1]);
            dicef[a][0]=dices[a][0];
            dicef[a][2]=dices[a][2];
        }
        if(op > 0)
        {
            for(int i=0;i<4;i++) swap(dices[a][i],dices[op-1][i]);
            for(int i=0;i<4;i++) swap(dicef[a][i],dicef[op-1][i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << dicef[i][0] << " ";
    }
}

// 1=1 2=3 3=2