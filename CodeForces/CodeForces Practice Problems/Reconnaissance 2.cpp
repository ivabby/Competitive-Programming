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
const int N = (int)2e5 + 9;
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
    int n;
    cin>>n;
    vector<int> a(n);
    forr(0,n-1) cin>>a[i];

    pair<int,int> p;
    int maxi = 1000000;
    forr(0,n-1)
    {
        int prev = i-1;
        if(i == 0)
            prev = n-1;

        int v = abs(a[prev] - a[i]);
        if(v < maxi)
        {
            maxi = v;
            p.first = prev + 1;
            p.second = i + 1;
        }

        int next = (i+1)%n;
        v = abs(a[next] - a[i]);
        if(v < maxi)
        {
            maxi = v;
            p.first = next + 1;
            p.second = i + 1;
        }
    }

    cout<<p.first<<" "<<p.second;
    return 0;
}
