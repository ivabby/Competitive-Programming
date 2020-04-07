#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	int n;
	cin>>n;
	vector<string> a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	sort(a.begin() , a.end());

	map<string , ll> m;
	for(int i=0;i<a.size();i++)
	{
		ll val = 0;
		for(char c : a[i])
			val+=(c - 'A' + 1);

		m[a[i]] = val*(i+1);
	}

	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<m[s]<<"\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve();
	
	return 0;
}
