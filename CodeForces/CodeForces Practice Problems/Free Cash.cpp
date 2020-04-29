#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n , ans = 0;
	cin>>n;
	map<int , int> t;

	for(int i=1;i<=n;i++)
	{
		int h,m;
		cin>>h>>m;
		t[h*60 + m]++;

		ans = max(ans , t[h*60+m]);
	}

	cout<<ans<<"\n";
	return 0;
}
