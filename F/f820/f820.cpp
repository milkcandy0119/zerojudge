#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); 
    cin.tie(0);
	int n, h[31], left, right, start;
	while (cin >> n) {
		for (int i = 1; i <= n; i++)
			cin >> h[i];
		cin >> start; 
        left = right = start;
		while (left > 1 && h[left - 1] <= h[left])
			--left;
		while (right + 1 <= n && h[right] >= h[right + 1])
			++right;
		cout << (h[left] < h[right] ? left : right) << '\n';
	}
}