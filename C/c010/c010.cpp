#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int>v;
	v.reserve(10000); 
	int r=0;
	while(scanf("%d",&n)==1)
	{
		if(v.empty()) v.push_back(n);
		else
		{
			//int pos=-v.begin();
			v.insert(lower_bound(v.begin(),v.end(),n),n);
		}
		if(v.size()%2)
		{
			cout<<v[v.size()/2]<<"\n";
		}
		else cout<<(v[v.size()/2]+v[v.size()/2-1])/2<<"\n";
	}	
}