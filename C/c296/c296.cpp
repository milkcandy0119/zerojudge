#include <bits/stdc++.h>
using namespace std;
int N, M, K;

int solve(int N, int M, int K){
	if(K == 0) return 0;
	return (solve(N-1, M, K-1) + M) % N;
}

int main(){
	cin >> N >> M >> K;
	cout << solve(N, M, K) + 1 << '\n';
}