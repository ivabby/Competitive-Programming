#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = (int) 1e6 + 9;
unordered_set<ll> s;
bool a[N];

void solve(){
	memset(a , true , sizeof a);
	for(ll i=2;i<N;i++)
	{
		if(a[i] == true)
		{
			s.insert((ll) i * (ll) i);
			for(ll j=i*i;j<N;j+=i)
				a[j] = false;
		}
	}


	int n;
	cin>>n;
	while(n--){
		ll x;
		cin>>x;
		if(s.find(x) != s.end()) cout<<"YES\n";
		else cout<<"NO\n";
	}
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
