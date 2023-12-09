#include <iostream>
#include <string> 
#include <sstream>
using namespace std;
int main(){
string list[26] = {"10", "11", "12", "13", "14", "15", "16", "17", "34", "18", "19", "20", "21",
"22", "35", "23", "24", "25", "26", "27", "28", "29", "32", "30", "31", "33" };
string list2[26] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R",
"S","T","U","V","W","X","Y","Z" };
string x;
while (cin >> x){
    stringstream temp;
    stringstream temp2;
    int res,a,b=0;
    string str;
    int a1, a2,orgin;
    for (int i = 0; i < x.length(); i++){
        temp << x[i];
        temp >> res;
        a = res * (x.length() - i-1);
        b = b + a;
        temp.str("");
        temp.clear();
    }
    //b = 10 - (b % 10);
    for (int i = 0; i < 26; i++){
        string str2;
        orgin = b;
        str = list[i];
        str2 = list[i];
        temp << str[0];
        temp2 << str[1];
        temp >> a1;
        temp2 >> a2;
        emp.str("");
        temp.clear();
        emp2.str("");
        temp2.clear();
        orgin = 10 - (orgin + a1 + a2*9) % 10;
        temp << x[x.length() - 1];
        temp >> str;
        if (orgin == 10){
            orgin = 0;
        }
        if (str == to_string(orgin)){
            cout << list2[i];
        }
        temp.str("");
        temp.clear();
        }
    //cout << b << endl;
    }
}