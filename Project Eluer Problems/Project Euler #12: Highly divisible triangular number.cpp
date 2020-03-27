#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int n){
	int i = 2;
	int total = 1 , cnt = 0;
	for(int i=2;i<=1000;i++)
	{
		cnt = 0;
		while(n%i == 0)
		{
			n/=i;
			cnt++;
		}
		total = total * (cnt + 1);
	}

	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int i = 1 , j = 1;

		while(solve(i) <= n)
		{
			j++;
			i+=j;
		}

		cout<<i<<"\n";
	}
	
	return 0;
}
