#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = (int) 1e5 + 10;
int a[N] , n , m , x;
set<int> s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=n-1;i>=0;i--)
	{
		s.insert(a[i]);
		a[i] = s.size();
	}

	while(m--){
		cin>>x;

		cout<<a[x-1]<<"\n";
	}
	
	return 0;
}
