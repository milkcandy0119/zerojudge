#include <bits/stdc++.h>
using namespace std;

char ASC(string s){
    if(s==".-") return 'A';
    if(s=="-...") return 'B';
    if(s=="-.-.") return 'C';
    if(s=="-..") return 'D';
    if(s==".") return 'E';
    if(s=="..-.") return 'F';
    if(s=="--.") return 'G';
    if(s=="....") return 'H';
    if(s=="..") return 'I';
    if(s==".---") return 'J';
    if(s=="-.-") return 'K';
    if(s==".-..") return 'L';
    if(s=="--") return 'M';
    if(s=="-.") return 'N';
    if(s=="---") return 'O';
    if(s==".--.") return 'P';
    if(s=="--.-") return 'Q';
    if(s==".-.") return 'R';
    if(s=="...") return 'S';
    if(s=="-") return 'T';
    if(s=="..-") return 'U';
    if(s=="...-") return 'V';
    if(s==".--") return 'W';
    if(s=="-..-") return 'X';
    if(s=="-.--") return 'Y';
    if(s=="--..") return 'Z';
}

int main(){
    int n;
    cin >> n;
    string s;
    while(n--){
        getline(cin,s);
        Stringsplit(str,' ',s);
        for(auto ss: str){
            cout << ASC(s);
        }
        cout << "\n";
    }
}