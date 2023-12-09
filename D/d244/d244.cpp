#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> stone;
    map<int, int>::iterator iter;
    string s;
    while(getline(cin, s)){
        stringstream ss(s);
        int n;
        while(ss>>n){
            stone[n]++;
        }
    }
    /*
    for(int i=0;i<n;i++){
        iter = stone.find(arr[i]);
        if(iter == stone.end()){
            stone.insert(pair<int, int>(arr[i],1));
        }else{
            stone[arr[i]]++;
        }
    }
    */
    for(iter = stone.begin(); iter != stone.end(); iter++){
        if(iter->second %3 == 2) cout << iter->first << "\n";
    }
    /*
    for(iter = stone.begin(); iter != stone.end(); iter++){
        cout<< iter->first << " " << iter->second << "\n";
    }
    */
}