#include <iostream>
using namespace std;
int main()
     {
      int b,N,N1,N2,n,n1,s,s1,s2; int i;
      while (cin>>b>>N){
               N1=N; N2=N; s=0; s1=0; s2=0;
               while (N1/10!=0)          //轉換成十進位
                       {
                         s++;
                         n=N1%10;
                         N1=N1/10;
                         for (i=2;i<=s;i++)  {n=n*b;}
                         s1=s1+n;
                         if (N1/10==0)
                           {
                            s++;              //以s記錄幾位數 
                            n=N1;
                            for (i=2;i<=s;i++)  {n=n*b;}
                            s1=s1+n;
                           }
                        }

                while (N2/10!=0)       //各位數字自乘s(位數)次 
                        {
                          n=N2%10; n1=N2%10;
                          N2=N2/10;
                          for (i=2;i<=s;i++)  {n1=n1*n;}
                          s2=s2+n1;
                          if (N2/10==0)
                            {
                             n=N2; n1=N2;
                             for (i=2;i<=s;i++)  {n1=n1*n;}
                             s2=s2+n1;   //s2為自乘後總合
                            }
                         }
        
                 if (s1==s2) cout<<"YES"<<"\n";
                 else if (s1!=s2) cout<<"NO"<<"\n";
      
                }
      
      
     }

 