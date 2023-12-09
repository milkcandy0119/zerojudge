#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int grade,sum = 0;
    for(int i=0;i<n;i++){
        cin >> grade;
        sum += grade;
    }
    double ans = double(sum) / n;
    ans = int((ans+0.005)*100)/100.0;
    ostringstream oss;
    oss << ans;
    cout << oss.str() << "\n";   
}