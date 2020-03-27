#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 510;
ll mod = 1e9 + 7;
int a[N][N] = {1};

void solve(){
	for(int i=0;i<N;i++)
		a[i][0] = 1 , a[0][i] = 1;

	for(int i=1;i<N;i++)
		for(int j=1;j<N;j++)
			a[i][j] = (a[i][j-1] + a[i-1][j]) % mod;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	solve();
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<a[n][m]<<"\n";
	}
	return 0;
}
