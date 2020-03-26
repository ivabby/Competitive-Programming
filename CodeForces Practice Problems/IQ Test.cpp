#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n = 4;
	string s[4];

	for(int i=0;i<n;i++)
		cin>>s[i];

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			int v = 0 , c = 0;
			if(s[i][j] == '.') v++;
			else c++;
			if(s[i][j+1] == '.') v++;
			else c++;
			if(s[i+1][j] == '.') v++;
			else c++;
			if(s[i+1][j+1] == '.') v++;
			else c++;

			if(v>=3 || c>=3)
			{
				cout<<"YES";
				return;
			}
		}
	}


	cout<<"NO";
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
