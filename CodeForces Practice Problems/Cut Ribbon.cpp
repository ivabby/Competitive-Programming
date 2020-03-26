#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,a,b,c;

	cin>>n>>a>>b>>c;

	int ans = 0;

	for(int i=0;i*a<=n;i++)
	{
		int j = 0;
		while(i*a + j*b <= n)
		{
			int k = (n - i*a - j*b) / c;
			if(i*a + j*b + c*k == n)
				ans = max(ans , i+j+k);
			j++;
		}
	}

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
