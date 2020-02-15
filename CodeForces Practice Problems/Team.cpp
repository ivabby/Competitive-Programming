#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
const int N = (int)1e5 + 9;
ll power(ll x,ll y)
{
    ll ans = 1;
    while(y>0)
    {
        if(y%2 == 1)
            ans = ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
	cin>>n>>m;
	int minOne = n-1;
	int maxOne = (n+1)*2;
	if(m>=minOne && m<=maxOne)
	{
		if(m == n-1)
		{
			cout<<"0";
			for(int i=1;i<=m;i++) cout<<"10";
			return 0;
		}

		if(m == n)
		{
			for(int i=1;i<=m;i++) cout<<"10";
			return 0;
		}

		int t = m - (n+1);
		for(int i=0;i<n;i++)
		{
			if(i<t) cout<<"11";
			else cout<<"1";
			cout<<"0";
		}
		if(m == maxOne) cout<<"11";
		else cout<<"1";
	}
	else
		cout<<"-1";
    return 0;
}
