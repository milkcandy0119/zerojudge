#include <iostream>

using namespace std;



int main(){

ios::sync_with_stdio(0);

cin.tie(0);

string s;

while (cin >> s){

int a[26]={0};

int len=s.length();

for (int i=0; i<len; i++){

if (isalpha(s[i])){

s[i]=toupper(s[i]);

a[s[i]-'A']++;

}

}

int odd=0;

bool p=true;

for (int i=0; i<26; i++){

if (a[i]%2){

odd++;

}

if (odd>1){

p=false;

break;

}

}

if (p){

cout <<"yes !"<<endl;

}

else {

cout <<"no..."<<endl;

}

}

}