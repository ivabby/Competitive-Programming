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
const int N = (int)3e5 + 9;
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
int t,n;
ll a[N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        forr(0,n-1) cin>>a[i];

        int prefixEnd = -1;
        int suffixEnd = n;
        forr(0,n-1)
        {
            if(a[i] < i) break;
            prefixEnd = i;
        }

        for(int i=n-1;i>=0;i--)
        {
            if(a[i] < (n-i-1)) break;
            suffixEnd = i;
        }

        if(suffixEnd <= prefixEnd) cout<<"Yes\n";
        else cout<<"No\n";
    }
    
    return 0;
}
