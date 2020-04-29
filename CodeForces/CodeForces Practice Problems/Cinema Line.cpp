#include <bits/stdc++.h>
using namespace std;

void solve(){
	map<int,int> m;
	int n , x;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x == 25)
		{
			m[x]++;
		}
		else if(x == 50)
		{
			m[x]++;
			if(m[25] == 0)
			{
				cout<<"NO";
				return;
			}
			m[25]--;
		}
		else{
			m[x]++;
			if(m[25] > 0 && m[50] > 0)
			{
				m[25]--;
				m[50]--;
			}
			else if(m[25] >= 3)
			{
				m[25]-=3;
			}
			else{
				cout<<"NO";
				return;
			}
		}
	}
	cout<<"YES";
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
