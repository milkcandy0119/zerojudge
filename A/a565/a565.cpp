#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    char c;
	cin >> n;
	while(n--) {
		int ans = 0;
		int left = 0;
		while(1) {
			c = getchar();
			if(c == '\n') break;
			else {
				if(c == 'p')
					left++;
				else if(c == 'q'){
					if(left > 0) {
						left--;
						ans++;
					}
                }
			}
		}
		cout << ans << "\n";
	}
}