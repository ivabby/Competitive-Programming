#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = (int) 1e2 + 10;
int a[N] , n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ans = 0;

	cin>>n;
	for(int i=0;i<n;i++){ cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int cnt = 0;

			for(int k=i;k<=j;k++)
			{
				if(a[k] == 0) cnt++;
			}

			for(int k=0;k<i;k++)
				cnt += a[k];

			for(int k=j+1;k<n;k++)	
				cnt += a[k];

			ans = max(ans , cnt);
		}
	}

	cout<<ans;
	return 0;
}
