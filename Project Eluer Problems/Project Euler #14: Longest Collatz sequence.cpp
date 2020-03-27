#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e6 + 10;
ll a[N] , res[N];

void solve(){
	a[1] = 1;
	for(int i=2;i<=5000000;i++)
	{
		int v = i;
		int k = 0;
		while(v!=1 && v>=i)
		{
			k++;
			if(v%2 == 0)
				v/=2;
			else
				v = 3*v + 1;
		}

		a[i] = k + a[v];
	}

	res[1] = 1;
	for(int i=2;i<=5000000;i++)
	{
		if(a[i] >= a[res[i - 1]])
			res[i] = i;
		else
			res[i] = res[i-1];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	solve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<res[n]<<"\n";
	}
	return 0;
}
