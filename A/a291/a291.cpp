#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string num;
    char c[4];
    char d[4];
    while(cin>>c[0]>>c[1]>>c[2]>>c[3])
    {
        num="";
        for(int i=0;i<4;i++)num = num+c[i];
        int time;
        cin>>time;
        while(time--)
        {
            int a=0,b=0;
            int rec;
            bool index_A[4] = {true,true,true,true};
            bool index_B[4] = {false,false,false,false};
            bool isfirst_round = true;
            int cnt=0;
            string ans="";
            cin>>d[0]>>d[1]>>d[2]>>d[3];
            for(int i=0;i<4;i++)ans = ans+d[i];
            for(int i=0;i<4;i++)
            {
                rec =-1;
                isfirst_round =true;
                for(int j=0;j<4;j++)
                {
                    if(index_A[j] == false)continue;//若這格已A跳過
                    if(num[i] == ans[j] && i==j)
                    {
                        if(index_B[j] == true)
                        {
                            a++;
                            index_A[j] = false;
                            index_B[j] = false;
                            if(rec!=-1)index_B[rec]=false;
                        }
                        else
                        {
                            a++;
                            index_A[j] = false;
                            index_B[j] = false;
                            if(rec!=-1)index_B[rec]=false;
                            break;
                        }
                    }
                    else if(num[i] == ans[j] && i!=j && index_B[j]==false && isfirst_round==true)
                    {
                        isfirst_round =false;
                        index_B[j]=true;
                        rec = j;
                    }
                }
            }
            for(int i=0;i<4;i++){if(index_B[i]==true)b++;}
            cout<<a<<'A'<<b<<'B'<<'\n';
        }
    }
}