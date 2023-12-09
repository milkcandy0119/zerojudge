#include <bits/stdc++.h>
using namespace std;

const int day = 1440;

int main(){
    int h1, h2, m1, m2, h, m;
    cin >> h1 >> m1 >> h2 >> m2;
    int sum1 = h1*60 + m1;
    int sum2 = h2*60 + m2;

    if(sum2 < sum1) m = day - (sum1 - sum2);
    else m = sum2 - sum1;

    h = m/60;
    m %= 60;
    cout << h << " " << m << "\n";
}