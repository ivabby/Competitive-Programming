#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<long long> a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	sort(a.begin() , a.end());

	long long ans = 0;
	for(int i=0;i<n;i++)
		ans = ans + abs(i+1 - a[i]);

	cout<<ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt" , "w" , stdout);
    #endif

	solve();
	
	return 0;
}
