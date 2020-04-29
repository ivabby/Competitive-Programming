#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , x, y;
	cin>>n;
	int s1 = 0 , s2 = 0 , diff = 0;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		x%=2;
		y%=2;
		s1+=x;
		s2+=y;
		diff += (x!=y);
	}

	s1%=2 , s2%=2;
	if(s1 != s2) cout<<"-1";
	else if(s1 == 0) cout<<"0";
	else if(diff == 0)cout<<"-1";
	else cout<<"1";
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
