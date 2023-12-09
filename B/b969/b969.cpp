#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string A,B;
    getline(cin, A);
    getline(cin, B);
    stringstream ss;
    ss << A;
    while (ss >> A)
        cout<<B<<", "<<A<<endl;
    return 0;
}