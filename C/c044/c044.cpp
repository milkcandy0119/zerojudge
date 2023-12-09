#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

bool cmp(pair<char,int> a, pair<char,int> b){
    if(a.second > b.second) return true;
    else if((a.second == b.second)&&(a.first<b.first)) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    pair<char,int> a[26];
    for(int i=0;i<26;i++) a[i].first = char(i+65); //A==65;
    for(int i=0;i<26;i++) a[i].second = 0;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                a[toupper(s[i])-'A'].second++;
            }
        }
    }

    sort(a,a+26,cmp);

    for(int i=0;i<26;i++){
        if(a[i].second > 0)
            cout << a[i].first << " " << a[i].second << "\n";
    }
}