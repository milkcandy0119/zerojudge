#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	double t, n;
	while (cin >> t >> n)
		cout << fixed << setprecision(3) << t * (-log2(n)) << '\n';
}