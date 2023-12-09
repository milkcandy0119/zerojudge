#include <bits/stdc++.h>
using namespace std;
void move(int &x,int &y,char &front,char key){
    if(front == 'N'){
        if(key == 'L') front = 'W';
        else if(key == 'R') front = 'E';
        else if(key == 'F') y++;
        else if(key == 'B') y--;
    }
    else if(front == 'S'){
        if(key == 'L') front = 'E';
        else if(key == 'R') front = 'W';
        else if(key == 'F') y--;
        else if(key == 'B') y++;
    }
    else if(front == 'E'){
        if(key == 'L') front = 'N';
        else if(key == 'R') front = 'S';
        else if(key == 'F') x++;
        else if(key == 'B') x--;
    }
    else if(front == 'W'){
        if(key == 'L') front = 'S';
        else if(key == 'R') front = 'N';
        else if(key == 'F') x--;
        else if(key == 'B') x++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int row,col,x,y;
    char front;
    string op;
    cin >> row >> col;
    bool scent[51][51]={false};
    while(cin >> x >> y >> front){
        bool out = false;
        cin >> op;
        int l=op.size();
        for(int i=0;i<l;i++){
            move(x,y,front,op[i]);
            if(x<0 || y<0 || x>row || y>col){
                if(op[i]=='L') move(x,y,front,'R');
                else if(op[i]=='R') move(x,y,front,'L');
                else if(op[i]=='F') move(x,y,front,'B');
                if(scent[x][y])
                    continue;
                scent[x][y] = true;
                out = true;
                break;
            }
        }
        if(out == true) cout << x << " " << y << " " << front << " LOST\n";
        else cout << x << " " << y << " " << front << "\n";
    }
}