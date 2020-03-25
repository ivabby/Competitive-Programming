#include <bits/stdc++.h>
using namespace std;

int a[5005];
vector<pair<int,int>> ans;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=2*n;i++)
	{
		int x;
		scanf("%d",&x);
		if(a[x] == 0)
			a[x] = i;
		else{
			ans.push_back(make_pair(i , a[x]));
			a[x] = 0;
		}
	}
	
	for(int i=0;i<5005;i++)
		if(a[i] != 0)
		{
			puts("-1");
			return 0;
		}
	
	for(int i=0;i<n;i++)
		printf("%d %d\n",ans[i].first,ans[i].second);
	return 0;
}
