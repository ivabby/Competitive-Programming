#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	int a[n][2];

	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			cin>>a[i][j];

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i][0] < a[j][0])
			{
				swap(a[i][0] , a[j][0]);
				swap(a[i][1] , a[j][1]);
			}
			if(a[i][0] == a[j][0] && a[j][1] < a[i][1])
			{
				swap(a[i][0] , a[j][0]);
				swap(a[i][1] , a[j][1]);
			}
		}
	}

	k--;
	int v1 = a[k][0] , v2 = a[k][1];
	int cnt = 1;
	for(int i=k-1;i>=0;i--)
	{
		if(a[i][0] == v1 && a[i][1] == v2)
			cnt++;
		else
			break;
	}

	for(int i=k+1;i<n;i++)
		if(a[i][0] == v1 && a[i][1] == v2)
			cnt++;

	cout<<cnt;  
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
