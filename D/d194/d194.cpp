#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,ans=0;
		cin >> n;
		vector<ll> snow(n);
		set<ll> in;
		in.clear();
		for(int i=0;i<n;i++){
			cin >> snow[i];
		}
		int c=0;
		for(int i=0;i<n;i++){
			if(in.count(snow[i])==0){
				in.insert(snow[i]);
				c++;
				ans=max(c,ans);
			}
			else{
				in.clear();
				c=0;
			}
		}
		cout << ans << "\n";
	}
}














/*
#include <bits/stdc++.h>
using namespace std;
int in[1000001];
int main(){
	set<int> s;
	int ca,n,a,maxlen,L,R;
	cin >> ca;
	for(int i=0;i<ca;i++){
		cin >> n;
		s.clear();
		for(int i=0;i<n;i++)
			cin >> in[i];
		L=0,R=0,maxlen=0;
		while(R<n){
			if (s.count(in[R])==0){
				s.insert(in[R]);
				R++;
				maxlen=max(maxlen,R-L);
			}else
				while(s.count(in[R])>0){
					s.erase(in[L]);
					L++;
				}
		}
		cout << maxlen <<"\n";
	}
}
*/