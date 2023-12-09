#include <bits/stdc++.h>
using namespace std;

int main(){
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while(getline(cin,s)){
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                int cmp = keyboard.find(s[i]);
                cout << keyboard[cmp-2];
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

while(bool){
    ...
    

    if(xxx){
        break;
    }




    ...
}

for(int i=0;i<n;i++){
    if(ans){
        break;
    }
}