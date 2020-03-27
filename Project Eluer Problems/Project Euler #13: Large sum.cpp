#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
	int n;
	cin>>n;
	string s[n];
	int res[100000] = {0};

	for(int i=0;i<n;i++) cin>>s[i];

	int k = 0 , carry = 0;
	for(int i=49;i>=0;i--)
	{
		int sum = 0;
		for(int j=0;j<n;j++)
			sum = sum + (s[j][i] - '0');
		sum = sum + carry;
		res[k] = sum%10;
		carry = sum / 10;
		k++;
	}

	while(carry > 0)
	{
		res[k++] = carry%10;
		carry/=10;
	}

	for(int i=0;i<10;i++)
		cout<<res[--k];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve();
	
	return 0;
}
