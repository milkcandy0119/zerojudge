/*#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const int maxn = 1000005;
int n, l;;
int n,l,c[maxn],h[maxn],cut[maxn],ans,last;
bool cut_new;
set <int> tree;

void cut_tree(int i){
    if(c[i]-h[i] >= 0 or c[i]+h[i] <= l){
        int L = i-1;//左邊
        int R = i+1;//右邊
        while(L>0 && cut[L]==1) L--;
        while(R<n-1 && cut[R]==1) R++;
        if(i > 0 && c[i]-h[i] >= c[L] or (i < n-1 && c[i]+h[i] <= c[R])){
            ans++;
            cut[i]=1;
            tree.insert(h[i]);
        }
    }
}

int main(){
    fastio;
    cin >> n >> l;
    for(int i=0;i<n;i++) cin >> c[i];
    for(int i=0;i<n;i++) cin >> h[i];
    cut_new = true;
    while(cut_new){
        for(int i=0;i<n;i++){
            if(cut[i]==0)//判斷砍了沒
                cut_tree(i);
        }
        cut_new = (ans != last);//new?
        last=ans;
    }
    cout << ans << "\n" ;
    if(tree.size()) cout << *(--tree.end()) << "\n";
    else cout << "0\n";
}
//c[i]=>樹的位置
//h[i]=>樹的高度
//樹場長L，N棵樹
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,x,allcut=0,tall=0;
    scanf("%d %d",&n,&x);
    int tree[n][2];
    for(int t=0;t<n;t++){
        scanf("%d",&tree[t][0]);
    }
    for(int t=0;t<n;t++){
        scanf("%d",&tree[t][1]);
    }
    int cut=1;
    while(cut>0){
        cut=0;
        for(int t=0;t<n;t++){
            int c=1;
            bool bcut=false;
            if(tree[t][0]!=-1){
                for(c=1;c<=n-t;c++){
                    if(c!=n-t&&tree[t+c][0]!=-1){
                        if(tree[t+c][0]>=tree[t][0]+tree[t][1]){
                            if(tree[t][1]>tall)
                                tall=tree[t][1];
                            tree[t][0]=-1;
                            tree[t][1]=0;
                            bcut=true;
                            cut++;
                            allcut++;
                        }
                            break;
                    }
                    else if(c==n-t){
                        if(x>=tree[t][0]+tree[t][1]){
                            if(tree[t][1]>tall)
                                tall=tree[t][1];
                            tree[t][0]=-1;
                            tree[t][1]=0;
                            cut++;
                            bcut=true;
                            allcut++;
                        }
                            break;
                    }
                }
            if(bcut==false){
                for(c=1;c<=t;c++){
                    if(c!=t&&tree[t-c][0]!=-1){
                        if(tree[t-c][0]<=tree[t][0]-tree[t][1]){
                            if(tree[t][1]>tall)
                                tall=tree[t][1];
                            tree[t][0]=-1;
                            tree[t][1]=0;
                            bcut=true;
                            cut++;
                            allcut++;
                        }
                            break;
                    }
                    else if(c==t){
                        if(0<=tree[t][0]-tree[t][1]){
                            if(tree[t][1]>tall)
                                tall=tree[t][1];
                            tree[t][0]=-1;
                            tree[t][1]=0;
                            cut++;
                            bcut=true;
                            allcut++;
                        }
                            break;
                    }
                }
                }
            }
        }
        /*printf("\n%d\n",cut);
        for(int t=0;t<n;t++){
            printf("%d ",tree[t][0]);
        }*/
    }
    printf("%d\n%d",allcut,tall);
}