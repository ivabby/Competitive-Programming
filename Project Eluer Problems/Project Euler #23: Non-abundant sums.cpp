#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<int> s;
void solve(){
	int n;
	cin>>n;
	if(n > 28123)
		cout<<"YES\n";
	else
	{
		string ans = "NO\n";
		for(auto i : s)
		{
			if(i > n) break;
			int v = n-i;
			if(s.find(v) != s.end())
			{
				ans = "YES\n";
				break;
			}
		}
		cout<<ans;
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	for(int i=12;i<=100000;i++)
	{
		ll ss = 0;
		for(int j=1;j<=i/2;j++)
			if(i%j == 0)
			{
				ss+=j;

				if(i/j != i)
					ss+=i/j;
			}
		
		if(ss > i)
		s.insert(i);
	}

	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
