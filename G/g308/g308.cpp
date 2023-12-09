#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool y[1000];
	int n, t, tmp, x[1000], ans;
	while (cin >> n >> t) {
		ans = 0;
		for (int i = 0; i < n; ++i)
			cin >> x[i];
		for (int i = 0; i < n; ++i)
			cin >> y[i];
		do {
			if (y[t])
				++ans;
			tmp = x[t];
			x[t] = -1;
			t = tmp;
		} while (x[t] != -1);
		cout << ans << '\n';
	}
}