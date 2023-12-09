#include <bits/stdc++.h>
using namespace std;

bool b[4];
int game(string s){
	if(s.compare("1B")) return 1;
	if(s.compare("2B")) return 2;
	if(s.compare("3B")) return 3;
	if(s.compare("HR")) return 4;
	if(s.compare("FO")) return 0;
	if(s.compare("GO")) return 0;
	if(s.compare("SO")) return 0;

}

int run(int a){
	int tmp=0;
	for(int i=3;i>0;i++){
		if(b[i]){
			if((i+a)>=4){
				tmp++;
				b[i]=false;
			}
			else{
				b[i+a]=true;
				b[i]=false;
			}
		}
	}
	if(a==4) tmp++;
	else b[a]=true;
}

int main(){
	int p[9][5],n[9],out,tmpout,score;
	string s;
	for(int i=0;i<9;i++){
		cin >> n[i];
		for(int j=0;j<n[j];j++){
			cin >> s;
			p[i][j]=game(s);
        }
    }
    cin >> out;
    tmpout=0;
    score=0;
    for(int i=1;i<4;i++) b[i]=false;
    for(int j=0;j<5&&tmpout<out;j++){
        for(int i=0;i<9&&tmpout<out;i++){
            if(p[i][j]>0) score+=run(p[i][j]);
            else{
                tmpout++;
                if(tmpout%3==0){
                    for(int k=1;k<4;k++) b[k]=false;
                } 
            }
        }
    }
    cout << score << "\n";
}
