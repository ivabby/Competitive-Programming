#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = (int) 1e5 + 9;
ll a[N] , b[N];

void solve(){
	int n,m;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i] = a[i];
	}

	sort(b,b+n+1);

	for(int i=1;i<=n;i++)
	{
		a[i]+=a[i-1];
		b[i]+=b[i-1];
	}

	cin>>m;
	while(m--){
		int t,l,r;
		cin>>t>>l>>r;
		if(t == 1) cout<<a[r] - a[l-1]<<"\n";
		else cout<<b[r] - b[l-1]<<"\n";
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
