#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool allbad;
	int applepies, judges, threshold, score, sums, maximum, minimum;
	while (cin >> applepies >> judges >> threshold) {
		allbad = true;
		threshold *= (judges - 2);
		for (int i = 0; i < applepies; ++i) {
			maximum = sums = 0; minimum = 48763;
			for (int j = 0; j < judges; ++j) {
				cin >> score;
				sums += score;
				maximum = max(maximum, score);
				minimum = min(minimum, score);
			}
			if (sums - maximum - minimum >= threshold) {
				cout << i << '\n';
				allbad = false;
			}
		}
		if (allbad)
			cout << "A is for apple.\n";
	}
    /*
    int n,k,t;
    bool ans;
    while(cin >> n >> k >> t){
        ans=true;
        t*=(n-2);
        for(int i=0;i<n;++i){ //apple pie
            int Max=0,Min=9487,x,sum=0;
            for(int j=0;j<k;++j){ //test
                cin >> x;
                sum+=x;
                Max=max(Max,x);
                Min=min(Min,x);  
            }
            if(sum-Max-Min>=t){
                cout << i << "\n";
                ans=false;
            } 
        }
        if(ans) cout << "A is for apple.\n";
    }
    */
}
